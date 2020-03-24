package teste_carrinhu;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
       Carro car = new Carro();
       car.ExibeDadosDoCarro();

       car.ano = 2014;
       car.cor = "Prata";
       car.marca = "VW";
       car.modelo = "Voyage 1.6";
       car.ExibeDadosDoCarro();
       
       Proprietario titular =new Proprietario();
       car.dono=titular;
       car.dono.nome="Felipe";
       car.dono.sobreNome = "Carvalho";
       car.dono.cpf = "110.932.157-04";
       car.dono.idade=32;
       car.dono.sexo='M';
       car.dono.ExibeDadosDoProprietario();
       
       System.out.println("Status do Carro: "+car.status);
       car.LigaCarro();
       car.ExibeVelocidade();
       car.Acelera(10);
       car.ExibeVelocidade();
       car.Desacelera(5);
       car.ExibeVelocidade();
       car.DesligaCarro();
       car.Desacelera(5);
       car.ExibeVelocidade();
       car.DesligaCarro();
       car.Acelera(25);
       car.ExibeVelocidade();
       car.LigaCarro();
       System.out.println("Status do Carro: "+car.status);
       car.marcha.acionaMarchaRe(car.velocidadeAtual);
       car.Acelera(5);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       
       car.marcha.acionaMarchaNormal(car.velocidadeAtual);
       car.Acelera(0);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       car.Desacelera(-5);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       car.Freia();
       car.ExibeVelocidade();
       
       car.marcha.ExibeMarcha();
       car.marcha.acionaMarchaNormal(car.velocidadeAtual);
       car.marcha.ExibeMarcha();
       car.Acelera(0);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       car.Acelera(1);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       car.Acelera(9);
       car.marcha.setMarchaNormal(car.velocidadeAtual);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       car.Acelera(1);
       car.marcha.setMarchaNormal(car.velocidadeAtual);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
       car.Acelera(8);
       car.marcha.setMarchaNormal(car.velocidadeAtual);
       car.ExibeVelocidade();
       car.marcha.ExibeMarcha();
	}
}