package br.nom.belo.marcio;

public class Data 
{
	int dia, mes, ano;

	public Data(int i, int j, int k) 
	{
		if(dataValida(k, j, i))
		{
			dia = k;
			mes = j;
			ano = i;
		}
	}

	public int getDia() 
	{
		return this.dia;
	}

	public int getMes() 
	{
		return this.mes;
	}

	public int getAno() 
	{
		return this.ano;
	}

	public Data adicionarDias(int i) 
	{
		int diasValidos[] = {31,0,31,30,31,30,31,31,30,31,30,31};
		int dia = this.dia + i;
		int mes = this.mes;
		int ano = this.ano;
		if(ano%4 == 0 && !(ano%100 == 0))	
				diasValidos[1] = 29;
		else	diasValidos[1] = 28;

		while(dia > diasValidos[mes-1])
		{
			dia -= diasValidos[mes-1];
			mes++;
			if(mes > 12)
			{
				++ano;
				mes = 1;
			}
		}
		
		Data x = new Data(ano, mes, dia);
		return x;
	}

	private boolean dataValida(int d, int m, int a)
	{
		int diasValidos[] = {31,0,31,30,31,30,31,31,30,31,30,31};
		if(ano%4 == 0 && !(ano%100 == 0))	
				diasValidos[1] = 29;
		else	diasValidos[1] = 28;

		if(m <= 12 && m >= 1 && d >= 1 && d <= diasValidos[m-1] )
		{
			return true;
		}
		else
		{
			this.dia = 1;
			this.mes = 1;
			this.ano = 1900;
			return false;
		}
	}
}