#include<stdio.h>
#include <ctype.h>
int main(){
	
	int  i,votocandva=0,votocandA=0,votocandB=0,votocandC=0,votocandD=0,votocandN=0;
	char opcao;
		
		printf("Candidato A  - digite: A\n ");
		printf("Candidato B - digite: B\n ");
		printf("Candidato C - digite: C\n ");
		printf("Candidato D - digite: D\n ");
		printf(" voto nulo - digite: N \n ");
		printf("Candidato branco - digite: - \n ");
		printf("Digite X Para sair \n ");
		printf("\n informe seu voto");
		
	for(i=0;i<=5;i++){				
			opcao=toupper(opcao);
			scanf("%c", &opcao);
		

	switch (opcao){
	
		case 'A':
			votocandA=votocandA+1;
			break;
			
		case 'B':
			votocandB=votocandB+1;
			break;
			
		case 'C':
			votocandC=votocandC+1;
			break;
		case 'D':
			votocandD=votocandD+1;
			break;
		case 'N':
			votocandN=votocandN+1;
			break;
		case '-':
			votocandva=votocandva+1;
			break;
			
		case 'X':
			break;
	}
}
	printf("\n Resultado dos votos:   \n");
	printf("\n total de votos candidato a: %d  \n", votocandA);
	printf("\n total de votos candidato B: %d  \n", votocandB);
	printf("\n total de votos candidato C: %d  \n", votocandC);
	printf("\n total de votos candidato D: %d  \n", votocandD);
	printf("\n total de votos candidato nulo: %d  \n", votocandN);
	printf("\n total de votos candidato branco: %d  \n", votocandva);
	
	
}