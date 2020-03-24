#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int oldNumber = 0,nextNumber=1,direcao=1,i = 0,a;

    /*do{
    
    printf("I        ");
    oldNumber++;
    nextNumber++;
    
    } while(oldNumber!=nextNumber);*/
    
    
    /*for(i=1;i<=10;i++){
    	system("cls");
    	printf("%c %c %c %c %c %c %c %c %c %c", i==1?'o':' ',i==2?'o':' ',i==3?'o':' ',i==4?'o':' ',i==5?'o':' ',i==6?'o':' ',i==7?'o':' ',i==8?'o':' ',i==9?'o':' ',i==10?'o':' ');
		//sleep(1);
		printf("%d %d", i,direcao);
		if(direcao=1 && i== 10){direcao=-1;}
		if(direcao=-1 && i== 1){direcao=1;}
	}*/
	
	while(i<=10){
		system("cls");
    	printf("%c %c %c %c %c %c %c %c %c %c", i==1?'o':' ',i==2?'o':' ',i==3?'o':' ',i==4?'o':' ',i==5?'o':' ',i==6?'o':' ',i==7?'o':' ',i==8?'o':' ',i==9?'o':' ',i==10?'o':' ');
		//printf("%d %d", i,direcao);
		sleep(1);
		if(direcao== 1 && i== 10){
			direcao = -1;
		}
		if(direcao== -1 && i== 1){
			direcao = 1;
		}
		
		i+=direcao;
	}
}
