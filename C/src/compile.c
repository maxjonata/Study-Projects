#include <stdio.h>
#include <stdlib.h>

int opcao;

void menu(void) {

	do {
		system("cls");
		printf("\nBem vindo ao compilador USB de C!\n\n");
		printf("\n----------Menu-----------");
		printf("\n|1 - Compilar           |");
		printf("\n|2 - Compilar e Executar|");
		printf("\n|                       |");
		printf("\n|0 - Sair				  |");
		printf("\n-------------------------");
		printf("\n\nDigite o número relacionado a opção escolhida\n>");
		scanf("%d", &opcao);

		if(opcao != 1 && opcao != 2 && opcao != 0) {
			printf("\nErro: OPÇÃO INVÁLIDA   (Escolha um número dentre as opções)\n");
			system("pause");
		}

	} while(opcao != 1 && opcao != 2 && opcao != 0);

}

void compila(char arquivo[30]) {

	snprintf(arquivo, sizeof(*arquivo), "\"\\MinGW\\bin\\gcc\" %c.c -o %c.exe", arquivo, arquivo);
	system(arquivo);
	system("pause");

}

void compilaExecuta(char arquivo[30]) {

	/*system("@echo off");
	system("set PATH=%%PATH%%;F:\\programming\\MinGW\\bin");
	system("gcc %c.c -o %c.exe", arquivo, arquivo);
	system("%c.exe", arquivo);
	system("timeout /t 10");*/

}

int main(void) {

	menu();

	char arquivoC[30];

	printf("Digite o nome do arquivo C a ser compilado: ");
	scanf("%c", arquivoC);

	switch (opcao){
		case 1:
			compila(arquivoC);
			break;
		case 2:
			compilaExecuta(arquivoC);
			break;
		default:
			exit(0);
			break;
	}

}