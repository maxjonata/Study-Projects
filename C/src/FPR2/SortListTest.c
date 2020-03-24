#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct Slot {
    int valor;
    struct Slot* proximo;
} TSlot

typedef TSlot* TLista;

int inserir (TLista *L, int numero);
int remover (TLista *L, int numero);
int alterar (TLista L, int velho, int novo);
TLista pesquisar (TLista L, int numero);
void exibir (TLista L);

int menu ();

int main ()
{
	
	TLista L = NULL;
	int opcao, num1, num2, alt;
	
	do
	{
		
		opcao = menu ();
		
		switch (opcao)
		{
			
			case 1: printf ("Entre com o n�mero a ser inserido: ");
			        scanf ("%d", &num1);
			        
			        if (inserir (&L, num1) == TRUE) 
			        {
			        	printf ("Elemento inserido!\n");
					}
					else
					{
						printf ("ERRO: Elemento n�o inserido!\n");
					}
					break;
				
			
			case 2: printf ("Entre com o n�mero a ser removido: ");
			        scanf ("%d", &num1);
			        
			        if (remover (&L, num1) != 0)
			        {
			        	printf ("Elemento removido!\n");
					}
					else
					{
						printf ("ERRO: Elemento n�o removido!\n");
					}
					break;
				
			
			case 3: printf ("Entre com o n�mero a ser alterado: ");
			        scanf ("%d", &num1);
			        
			        printf ("Entre com o novo elemento: ");
			        scanf ("%d", &num2);
			        
			        alt = alterar (L, num1, num2);
			        if (alt != 0)
			        {
			        	printf ("%d ocorrencias de %d alteradas!\n", alt, num1);
					}
					else
					{
						printf ("ERRO: Elemento n�o alterado!\n");
					}
					break;
				
			
			case 4: printf ("Entre com o n�mero a ser buscado: ");
			        scanf ("%d", &num1);
			        
			        if (pesquisar (L, num1))
			        {
			        	printf ("Elemento encontrado!\n");
					}
					else
					{
						printf ("Elemento n�o encontrado!\n");
					}
					break;
				
			
			case 5: exibir (L);
			        break;
				
			
			case 6: printf ("Fim do programa!");
			        break;
			        
			
			default: printf ("Op��o inv�lida! Tente novamente.");
		}
		
		system ("pause");
	}
	while (opcao != 6);
}

int inserir (TLista *L, int numero)
{
	
	TLista aux = *L;
	TLista slot = (TLista) malloc (sizeof(TNo));
	
	if (aux == NULL)  
	{
		return FALSE;
	}
	else
	{

		while((aux->proximo) && (aux->proximo->valor < numero))
		{
			aux = aux->proximo;
		}
		slot->valor = numero;
		slot->proximo = aux->proximo;
		aux->proximo = slot;
		
		return TRUE;
	}
	
}

int remover (TLista *L, int numero)

{
	TLista aux, pre, pos;
	
	int rem=0;   
	
	

		
	
	
	while ((*L) && (*L)->valor==numero)
	{
		aux = *L;
		*L=aux->prox;
		free(aux);
		rem++;
	}
	

	if (*L)
	{	
		pre=*L;   		
		pos=pre->prox;	
		
		
		while (pos)   
		{
			
			if(pos->valor==numero)
			{				
				pre->prox=pos->prox;  
				rem++;
				free(pos);            
				pos = pre->prox;     
			}
			else
			{
				
				pre = pos;
				pos=pos->prox;
			}
        }
    }
    
    
	return rem;	
}

int alterar (TLista L, int velho, int novo)
{
	TLista aux = L;
	int cont = 0;
	
	while (aux)  
	{
		if (aux->valor == velho)
		{
			aux->valor = novo;
			cont++;
		}
		aux = aux->prox;
	}
	
	return cont;
}

TLista pesquisar (TLista L, int numero)
{
	TLista aux = L;

	while (aux)
	{
		if (aux->valor == numero)
		{
			return aux;
		}
		
		aux = aux->prox;
	}	
	
	return NULL;
}

void exibir (TLista L)
{
	TLista aux = L;
	
	if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{	
	    printf ("Lista: ");
		while (aux)
		{
			printf ("%d ", aux->valor);
			aux = aux->prox;
		}
		printf ("\n");
	}
}

int menu ()
{
	int op;
	
	system ("cls");
	printf ("Menu de op��es:\n\n");
	printf ("(1) Inserir\n(2) Remover\n(3) Alterar\n");
	printf ("(4) Buscar\n(5) Exibir\n(6) Sair\n\n");
	printf ("Entre com a sua op��o: ");
	scanf ("%d", &op);
	
	return op;
}
