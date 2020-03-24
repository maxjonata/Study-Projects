package ex;

import java.io.FileOutputStream;
import com.lowagie.text.Chunk;
import com.lowagie.text.Document;
import com.lowagie.text.Image;
import com.lowagie.text.PageSize;
import com.lowagie.text.Phrase;
import com.lowagie.text.pdf.Barcode128;
import com.lowagie.text.pdf.BarcodeEAN;
import com.lowagie.text.pdf.PdfContentByte;
import com.lowagie.text.pdf.PdfWriter;

public class CodigoBarras {
	public static void main(String[] args) {
		System.out.println("Barcode Linha de Código ");
		Document document = new Document(PageSize.A4, 50, 50, 50, 50);
		try {
			PdfWriter writer = PdfWriter.getInstance(document,
					new FileOutputStream("C:\\a\\manu.pdf"));
			document.open();
			PdfContentByte cb = writer.getDirectContent();
			Barcode128 barcode128 = new Barcode128();
			barcode128.setCodeType(barcode128.CODE128);
			barcode128.setCode("Manuella");
			Image image = barcode128.createImageWithBarcode(cb, null, null);
			
			//BarcodeEAN codeEAN = new BarcodeEAN();
			
			
//			codeEAN.setCodeType(codeEAN.CODABAR);
//			codeEAN.setCode("122000");
//			Image imageEAN = codeEAN.createImageWithBarcode(cb, null, null);
			document.add(new Phrase(new Chunk(image, 0, 0)));
		} catch (Exception de) {
			de.printStackTrace();
		}
		
		document.close();
	}
}
