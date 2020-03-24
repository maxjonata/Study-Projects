package teste_carrinhu;

class Marcha
{
    int modoMarcha = 1; //1-Para Frente | 2- Re
    int marchaAtual = 0;//ponto morto
    
    public void acionaMarchaRe(int velocidade){
        if(velocidade==0){
            this.modoMarcha = 2;   
        }
        else{
            System.out.println("Pare antes de engatar Re' ");
        }
    }
    public void acionaMarchaNormal(int velocidade){    
        if(velocidade==0){
            this.modoMarcha =1; 
        }
        else{
            System.out.println("Pare antes de engatar a Primeira");
        }
    }
    public void setMarchaNormal(int velocidade){
        if(velocidade == 0){
            this.marchaAtual = 0;//ponto morto
        }
        if(velocidade > 0 && velocidade < 10){
            this.marchaAtual = 1;
        }
        if(velocidade >= 10 && velocidade < 20){
            this.marchaAtual = 2;
        }
        if(velocidade >= 20 && velocidade < 40){
            this.marchaAtual = 3;
        }
        if(velocidade >= 40 && velocidade < 60){
            this.marchaAtual = 4;
        }
        if(velocidade >= 60 && velocidade < 80){
            this.marchaAtual = 5;
        }
        if(velocidade >= 80 && velocidade <= 220){
            this.marchaAtual = 6;
        }
    }
    public int getMarcha(){
        if(this.modoMarcha == 1){
            return marchaAtual;
        }
        return 7;//Re
    }
    public void ExibeMarcha(){
        if(this.getMarcha() == 7){
            System.out.println("Re");
        }
        else{
            if(this.marchaAtual > 0 && this.marchaAtual <= 6){
                System.out.println("Marcha: "+this.marchaAtual);
            }
            else{
                System.out.println("Ponto Morto");   
            }
        }
    }
}