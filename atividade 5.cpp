#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50],nvelho[50];
	int cont,idade,sexo,velho=0;
	float soma=0,media,qtm=0;
for(cont=0;cont<20;cont++){
	printf("Nome: ");
	fflush(stdin);
	gets(nome);
	printf("Idade: ");
	scanf("%d",&idade);
	printf("Sexo:1-Fem/2-Masc\n");
	scanf("%d",&sexo);
	//LETRA A e C
	if(sexo==1){
		printf("\n%s é MULHER\n",nome);
		soma=soma+idade;
		qtm++;
	}
	//LETRA B
	if((sexo==2)&&(idade>=velho)){
		velho = idade;
		strcpy(nvelho,nome);
	}
}
media=soma/qtm;
printf("\n%s é o homem mais velho com %d anos",nvelho,velho);
printf("\nMedia das idades das mulheres = %.2f",media);	
}
