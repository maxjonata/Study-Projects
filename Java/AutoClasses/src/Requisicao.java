public class Requisicao {
    private int credito;
    private String[] sigla;

    public Requisicao(int creditosNecessarios, String[] materiasNecessarias) {
        this.credito  =  creditosNecessarios;
        this.sigla    =  materiasNecessarias;
    }

    public int getCredito() {
        return credito;
    }

    public String[] getSigla() {
        return sigla;
    }
}
