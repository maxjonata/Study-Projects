#include <stdio.h>
#include <stdlib.h>
//https://www.cprogressivo.net/2013/10/Lista-simplesmente-encadeada-com-cabeca-em-C-Inserindo-nos-no-inicio-e-fim.html
typedef struct lista_encadeada
{
	int valor;
	struct lista_encadeada *proximo;
}Tlista;

void inserir(Tlista *inicio, int valor);
void remover(Tlista *inicio);
void printar(Tlista *inicio);
void inserir_fim(Tlista *inicio, int valor);
void remove_fim(Tlista *lista);
Tlista* buscar(Tlista *lista, int numero);

int main()
{
	Tlista *inicio, *valida_busca;
	int resp, valor;
	inicio = malloc(sizeof(Tlista));
    inicio->proximo=NULL;
	
	do
	{
		printf("inserir (1) / remover (2) / printar (3) / inserir final (4)\n");
		printf("remover final (5) / buscar (6) / sair (7)\n");
		scanf("%d", &resp);
		
		
		switch (resp)
		{
			case 1:
				printf("inserir valor:  ");
				scanf("%d", &valor);
				inserir(inicio, valor);
				break;
			case 2:
				inicio=remover(inicio);
				break;
			case 3:
				printar(inicio);
				break;
			case 4:
				printf("inserir valor:  ");
				scanf("%d", &valor);
				inserir_fim(inicio, valor);
				break;
			case 5:
				remove_fim(inicio);
				break;
			case 6:
				printf("inserir numero que deseja buscar:  ");
				scanf("%d", &valor);
				valida_busca=buscar(inicio, valor);
				
				printf("%d", &valida_busca->valor);
		}
	}
	while(resp!=7);
	

	
	
}

void inserir(Tlista *inicio, int valor)
{
	Tlista *novo = malloc(sizeof(Tlista));
	
	if(!novo)
	{
		printf("nao foi possivel alocar na memoria\n");
	}
	else
	{
		novo->valor=valor;
		novo->proximo=inicio->proximo;
		inicio->proximo=novo;
	}
}

void *remover(Tlista *inicio)
{
	Tlista *novo=malloc(sizeof(Tlista));
	novo=inicio;
	inicio=novo->proximo;
	free(novo);
	
	return inicio;
}

void inserir_fim(Tlista *lista, int valor)
{
	Tlista *novo;
    
	novo=lista;

    while(novo->proximo)
    {
        novo=novo->proximo;
    }
    novo->proximo = malloc(sizeof(Tlista));
    novo = novo->proximo;
    novo->valor=valor;
    novo->proximo=NULL;
}

void remove_fim(Tlista *lista)
{
    if(!lista)
    {
        printf("lista vazia\n");
    }
    else
    {
        while(lista->proximo->proximo)
        {
            lista=lista->proximo;
        }
        free(lista->proximo);
        lista->proximo=NULL;
    }
}


void printar(Tlista *inicio)
{
    Tlista *andar= (inicio->proximo);

    printf("lista: ");
    while(andar)
    {
        printf("%d ", andar->valor);
        andar=andar->proximo;
    }
    printf("\n");
}

Tlista* buscar(Tlista *lista, int numero)
{
    if(!lista)
    {
        printf("lista vazia\n");
    }
    else
    {
        while(lista)
        {
            if(lista->valor==numero)
            {
                return lista;
            }
            lista=lista->proximo;
        }
    }
    return lista;
}