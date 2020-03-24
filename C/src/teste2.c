#include <stdio.h>
int main (){
    int num, i=0, cont=0, med;

    do {
        printf("Digite um numero:\n");
        scanf("%d", &num);
		i=i+num;
		cont++;
		if (num == 0){
			cont=cont-1;
		}
        } while (num > 0 && num <= 10);
	
    med=i/cont;
	printf(" %d %d ", cont, med);
}