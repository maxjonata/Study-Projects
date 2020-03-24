package teste_carrinhu;

class Carro
{
    String marca;
    String modelo;
    String cor;
    String status = "Desligado";
    int velocidadeAtual = 0;
    int ano;
    Marcha marcha = new Marcha();
    Proprietario dono;
    
    public void ExibeDadosDoCarro(){
        System.out.println("Marca: "+this.marca);
        System.out.println("Modelo: "+this.modelo);
        System.out.println("Cor: "+cor);
        System.out.println("Ano: "+ano);
    }
    public void LigaCarro(){
        this.status = "Ligado";
        System.out.println("Carro Ligado");
    } 
    public void DesligaCarro(){
        if(this.velocidadeAtual == 0){
            this.status = "Desligado";
            System.out.println("Carro Desligado");
        }
        else{
            System.out.println("Pare antes para Desligar");
        }            
    }
    public int getVelocidade(){
        return this.velocidadeAtual;
    }
    public void ExibeVelocidade(){
        System.out.println("Velocidade: "+this.velocidadeAtual+" km/h");
    }    
    public int Acelera(int quantidade){
        if(this.status.equals("Ligado") && quantidade >= 0){
            this.velocidadeAtual += quantidade;
            return this.velocidadeAtual;
        }
        return this.velocidadeAtual;
    }
    public int Desacelera(int quantidade){
        if(this.velocidadeAtual > 0 && quantidade>=0){
            if(this.velocidadeAtual >= quantidade){
                this.velocidadeAtual -= quantidade;
                return this.velocidadeAtual;    
            }
            else{ //quantidade > velocidadeAtual
                this.velocidadeAtual = 0;
                return this.velocidadeAtual;
            }
        }
        //carro ja parado
        return this.velocidadeAtual;
    }
    public void Freia(){
        this.velocidadeAtual = 0;
        marcha.marchaAtual = 0; //PontoMorto
    }
}