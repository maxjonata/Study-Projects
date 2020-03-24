
import java.io.File;
import java.io.IOException;

import jxl.Cell;
import jxl.Sheet;
import jxl.Workbook;
import jxl.read.biff.BiffException;

public class Leitura {

	public static void main(String[] args) throws BiffException, IOException {
		/**
		 * Carrega a planilha
		 */
		Workbook workbook = Workbook.getWorkbook(new File("C:/a/exemplo2.xls"));
		/**
		 * Aqui é feito o controle de qual aba do xls será realiza a leitura dos dados
		 */

		Sheet sheet = workbook.getSheet(0);

		/**
		 * Numero de linhas com dados do xls
		 */
		int linhas = sheet.getRows();
		int colunas = sheet.getColumns();
		for (int j = 0; j < colunas; j++) {
			for (int i = 0; i < linhas; i++) {
				Cell celula1 = sheet.getCell(j, i);
			//	Cell celula2 = sheet.getCell(j, i);
			//	Cell celula3 = sheet.getCell(j, i);

				System.out.println("Conteúdo da célula 1: " + celula1.getContents());
				//System.out.println("Conteúdo da célula 2: " + celula2.getContents());
			//	System.out.println("Conteúdo da célula 3: " + celula3.getContents());
			}
		}
	}
}
