import java.io.File;
import java.io.IOException;
import java.util.Locale;
import jxl.CellView;
import jxl.Workbook;
import jxl.WorkbookSettings;
import jxl.write.Formula;
import jxl.write.Label;
import jxl.write.Number;
import jxl.write.WritableCellFormat;
import jxl.write.WritableFont;
import jxl.write.WritableSheet;
import jxl.write.WritableWorkbook;
import jxl.write.WriteException;
import jxl.write.biff.RowsExceededException;

public class Escrita {
	private WritableCellFormat timesBoldUnderline;
	private WritableCellFormat times;
	private String inputArquivo;

	public void setOutputFile(String inputArquivo) {
		this.inputArquivo = inputArquivo;
	}

	// Método responsável por fazer a escrita, a inserção dos dados na planilha
	public void insere() throws IOException, WriteException {
		// Cria um novo arquivo
		File arq = new File("C:/a/");
		if(!arq.exists()) arq.mkdirs();
		File arquivo = new File(
				"C:/a/exemplo2.xls");
		WorkbookSettings wbSettings = new WorkbookSettings();
		wbSettings.setLocale(new Locale("pt", "BR"));
		WritableWorkbook workbook = Workbook
				.createWorkbook(arquivo, wbSettings);
		// Define um nome para a planilha
		workbook.createSheet("Manuella", 0);
		WritableSheet excelSheet = workbook.getSheet(0);
		criaLabel(excelSheet);
		defineConteudo(excelSheet);
		workbook.write();
		workbook.close();
	}

	// Método responsável pela definição das labels
	private void criaLabel(WritableSheet sheet) throws WriteException {
		// Cria o tipo de fonte como TIMES e tamanho
		WritableFont times10pt = new WritableFont(WritableFont.TIMES, 10);
		// Define o formato da célula
		times = new WritableCellFormat(times10pt);
		// Efetua a quebra automática das células
		times.setWrap(true);
		// Cria a fonte em negrito com underlines
		WritableFont times10ptBoldUnderline = new WritableFont(
				WritableFont.ARIAL, 10, WritableFont.BOLD, false);
		// UnderlineStyle.SINGLE);
		timesBoldUnderline = new WritableCellFormat(times10ptBoldUnderline);
		// Efetua a quebra automática das células
		timesBoldUnderline.setWrap(true);
		CellView cv = new CellView();
		cv.setFormat(times);// Bom pessoal, é isso ai, qualquer dúvida é só
							// avisar.
		cv.setFormat(timesBoldUnderline);
		cv.setAutosize(true);
		// Escreve os cabeçalhos
		addCaption(sheet, 0, 0, "Nome");
		addCaption(sheet, 1, 0, "Comida");
		addCaption(sheet, 2, 0, "Salário");
	}

	private void defineConteudo(WritableSheet sheet) throws WriteException,
			RowsExceededException {

		// Escreve alguns números

		// Primeira coluna
		addLabel(sheet, 0, 1, "Raphael");
		// Segunda coluna
		addLabel(sheet, 1, 1, "Pao");
		// Terceira coluna
		addNumero(sheet, 2, 1, 3000);

		addLabel(sheet, 0, 2, "Anderson");
		// Segunda coluna
		addLabel(sheet, 1, 2, "Pipoca");
		// Terceira coluna
		addNumero(sheet, 2, 2, 3500);

		// Efetua a soma das colunas criadas anteriormente
		StringBuffer buf = new StringBuffer();
		buf = new StringBuffer();
		buf.append("SUM(B2:B3)");
		Formula f = new Formula(1, 3, buf.toString());
		sheet.addCell(f);
		buf = new StringBuffer();
		buf.append("SUM(C2:C3)");
		f = new Formula(2, 3, buf.toString());
		sheet.addCell(f);
	}

	// Adiciona cabecalho
	private void addCaption(WritableSheet planilha, int coluna, int linha,
			String s) throws RowsExceededException, WriteException {
		Label label;
		label = new Label(coluna, linha, s, timesBoldUnderline);
		planilha.addCell(label);
	}

	private void addNumero(WritableSheet planilha, int coluna, int linha,
			Integer integer) throws WriteException, RowsExceededException {
		Number numero;
		numero = new Number(coluna, linha, integer, times);
		planilha.addCell(numero);
	}

	private void addLabel(WritableSheet planilha, int coluna, int linha,
			String s) throws WriteException, RowsExceededException {
		Label label;
		label = new Label(coluna, linha, s, times);
		planilha.addCell(label);
	}

	public static void main(String[] args) {
		// WritableWorkbook workbookIn;
		Escrita exemplo = new Escrita();
		try {
			exemplo.insere();
		} catch (WriteException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Por favor abra a planilha");
	}
}