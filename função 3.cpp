#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
int soma (int a, int b){
	return a+b;
}
int multiplicar (int a, int b){
	return a*b;
}
int subtrair (int a, int b){
	return a-b;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite sua opção desejada: \n");
	printf("1-Somar 2- Multiplicar 3- Subtrair 4- Sair \n");
	int option, x, y;
	scanf("%d", &option);
			if(option==4){
		return 0;
	}
	printf("Informe dois números inteiros: \n");
	scanf("%d %d",&x,&y );
	switch(option){
		case 1:printf("\nResultado da operação: %d", soma(x,y));
		break;
		case 2:printf("\nResultado da operação: %d", multiplicar(x,y));
		break;
		case 3:printf("\nResultado da operação: %d", subtrair(x,y));
		break;
		default:printf("\nOpção não encontrada");
	}
}

