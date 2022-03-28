#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int valor, cedulas_100, cedulas_50, cedulas_20, cedulas_10, resto,moeda_de_1;
	printf("Digite o valor que voce deseja sacar: \n"); 
	scanf("%d",&valor);
	cedulas_100 = valor/100;
    resto = valor%100;
    cedulas_50 = resto/50;
    resto = resto%50;
    cedulas_20 = resto/20;
    resto = resto%20;
    cedulas_10 = resto/10;
    resto = resto%10;
    moeda_de_1 = resto/1;
    resto = resto%1;
    printf("\ncedulas de R$100: %d \ncedulas de R$50: %d \ncedulas de R$20: %d \ncedulas de R$10: %d \n moeda de R$1.0: %d", cedulas_100, cedulas_50, cedulas_20, cedulas_10, moeda_de_1);
}
