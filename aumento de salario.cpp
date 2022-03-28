//Escreva um programa que calcule o salário semanal de um trabalhador. 
//As entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. 
//Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.
#include<stdio.h>
#include<stdlib.h>
int main(){
	float horas_trabalhadas, valor_hora, salario_semanal;
	printf("Digite quantas horas voce trabalha por semana: ");
	scanf("%f",&horas_trabalhadas);
	printf("Digite quanto voce ganha por cada hora: ");
	scanf("%f",&valor_hora);
	if(horas_trabalhadas <= 40){
		printf("Seu salario nao teve acrescimo");
	}else if(horas_trabalhadas > 40 && horas_trabalhadas <= 60){
		salario_semanal = (valor_hora+((valor_hora*50)/100)*horas_trabalhadas);
		printf("Seu salario teve aumento de 50 porcento: %.2f",salario_semanal);
	}else if(horas_trabalhadas > 60){
		salario_semanal = ((valor_hora*2)*horas_trabalhadas);
		printf("Seu salario com aumento de 100 porcento: %.2f",salario_semanal);
	}
}

