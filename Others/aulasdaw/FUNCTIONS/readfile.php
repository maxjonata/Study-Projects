<head>
    <link rel="stylesheet" href="//cdnjs.cloudflare.com/ajax/libs/highlight.js/9.18.1/styles/default.min.css">
    <script src="//cdnjs.cloudflare.com/ajax/libs/highlight.js/9.18.1/highlight.min.js"></script>
    <script>hljs.initHighlightingOnLoad();</script>
</head>
<?php
    $path = $_GET['path'];
    echo '<pre><code class="html">';
    echo htmlspecialchars(file_get_contents($path));
    echo '</code></pre>'
?>