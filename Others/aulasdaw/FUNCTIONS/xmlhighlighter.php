<?php
/**
 * Set of tools for syntax highlighting of XML documents.
 *
 * The main class, XmlHighlighter, uses PHP's DOM extension to parse
 * the given input, and then converts that input into a list
 * (XUl). As such, this class requires PHP's DOM extension as well as
 * the OWS's HtmlLib.
 *
 * @author OpenWeb Solutions, LLC
 * @version 2014-02-11
 */

require_once('XML/HtmlLib.php');

/**
 * Exception for highlighters
 *
 * @author OpenWeb Solutions, LLC
 * @version 2014-02-11
 */
class XmlHighlighterException extends Exception {}

/**
 * Code to highlight XML snippets
 *
 * @author OpenWeb Solutions, LLC
 * @created 2014-02-11
 */
class XmlHighlighter {

  protected $dom;
  protected $output;

  protected $classPrefix = '';
  protected $nonEmptyNodes = array();

  /**
   * Creates a new XML Highlighter
   *
   */
  public function __construct() {
    $this->dom = new DOMDocument();
  }

  public function setClassPrefix($pre = "") {
    $this->classPrefix = $pre;
  }

  /**
   * Specify list of nodeNames that should always contain closing tags.
   *
   * This will render as <div></div> instead of <div /> even if there
   * are no children, for all nodeNames specified in list.
   *
   * @param Array $list the list of nodeNames
   */
  public function setNonEmptyNodes(Array $list) {
    $this->nonEmptyNodes = $list;
  }

  /**
   * Produce an XUl element containing the given fragment or document
   *
   */
  public function highlight(&$text) {
    if (!$this->dom->loadXML($text))
      throw new XmlHighlighterException("Unable to parse string.");
    $this->output = new XUl();
    $this->dom->normalize();
    for ($i = 0; $i < $this->dom->childNodes->length; $i++) {
      $this->convert($this->dom->childNodes->item($i), $this->output);
    }
    return $this->output;
  }

  /**
   * Convenience wrapper around highlight
   *
   * @see highlight
   */
  public function highlightFile($filename) {
    $text = file_get_contents($filename);
    return $this->highlight($text);
  }

  /**
   * Recursively parses the given node and fill the given $output
   *
   */
  protected function convert($node, $output) {
    switch ($node->nodeType) {
    case XML_ELEMENT_NODE:
      $li = new XLi(array(new XSpan("<"),
                          new XSpan($node->nodeName, array('class' => $this->classPrefix . 'tagname'))));
      $output->add($li);

      // attributes
      for ($i = 0; $i < $node->attributes->length; $i++) {
        $this->convert($node->attributes->item($i), $li);
      }

      // children
      if ($node->hasChildNodes()) {
        $li->add(new XSpan(">"));
        $li->add($sub = new XUl());
        for ($i = 0; $i < $node->childNodes->length; $i++) {
          $this->convert($node->childNodes->item($i), $sub);
        }
      }
      else {
        if (!in_array($node->nodeName, $this->nonEmptyNodes)) {
          $li->add(new XSpan(" />"));
          break;
        }
        $li->add(new XSpan(">"));
      }

      // close tag
      $li->add(new XSpan("</"));
      $li->add(new XSpan($node->nodeName, array('class' => $this->classPrefix . 'tagname')));
      $li->add(new XSpan(">"));

      break;

    case XML_ATTRIBUTE_NODE:
      $output->add(" ");
      $output->add(new XSpan($node->nodeName, array('class' => $this->classPrefix . 'attrname')));
      $output->add("=");
      $output->add(new XSpan(sprintf("\"%s\"", $node->nodeValue), array('class' => $this->classPrefix . 'attrvalue')));
      break;

    case XML_TEXT_NODE:
      $val = trim($node->nodeValue);
      if (strlen($val) > 0) {
        $output->add(new XLi($node->nodeValue, array('class' => $this->classPrefix . 'literal')));
      }
      break;

    case XML_COMMENT_NODE:
      $output->add(new XLi(array("<!-- ",
                                 new XSpan($node->nodeValue, array('class' => $this->classPrefix . 'commentvalue')),
                                 " -->"),
                           array('class' => $this->classPrefix . 'comment')));
      break;

    case XML_PI_NODE:
      $li = new XLi(array("<?",
                          new XSpan($node->nodeName, array('class' => $this->classPrefix . 'tagname')),
                          " ",
                          new XSpan($node->nodeValue, array('class' => $this->classPrefix . 'attrname'))),
                    array('class' => $this->classPrefix . 'pi'));
      
      $li->add("?>");
      $output->add($li);
      break;

    case XML_DOCUMENT_TYPE_NODE:
      $li = new XLi(new XSpan($node->internalSubset, array('class' => $this->classPrefix . 'doctype')));
      $output->add($li);
      break;

    default:
      $output->add(new XLi($node->nodeValue, array('class' => $this->classPrefix . 'unknown-' . $node->nodeType)));
      break;
    }
  }

  public static function htmlNonEmptyNodes() {
    return array('div', 'td', 'tr', 'table');
  }
}
?>