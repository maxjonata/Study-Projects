import org.apache.pdfbox.PDFReader;
import org.apache.pdfbox.pdmodel.PDDocument;

import java.io.File;
import java.io.FileWriter;

public class AutoClasses {
    public static void main(String[] args) {
        try {
            PDDocument documento = new PDDocument();
            documento.save("teste.pdf");
            System.out.println("criado");
            documento.close();
        } catch(Exception exception) {
            exception.printStackTrace();
        }

    }
}
