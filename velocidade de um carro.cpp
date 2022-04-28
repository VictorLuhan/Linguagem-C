#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int velocidade_maxima, velocidade;
	float multa;
	printf("Digite uma velocidade maxima de uma avenida: ");
	scanf("%d",&velocidade_maxima);
	printf("Digite a velocidade que você esta dirigindo: ");
	scanf("%d",&velocidade);
	if(velocidade > velocidade_maxima){
		multa = (velocidade-velocidade_maxima)*5;
		printf("Multa %.2f",multa);
	}else{
		printf("nao existe multa");
	}
}
