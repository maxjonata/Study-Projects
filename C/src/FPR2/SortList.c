
typedef struct Slot {
    int valor;
    struct Slot* proximo;
} TSlot

typedef TSlot* TLista;

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
