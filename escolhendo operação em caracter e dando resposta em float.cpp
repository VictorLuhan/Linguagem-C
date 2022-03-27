#include <stdio.h>
#include <stdlib.h>

int main(){
    char operacao;
    float num1, num2;
    printf("Escolha uma operacao(+,-,/,*):\n");
    scanf("%c", &operacao);
    printf("Digite dois numeros inteiros:\n");
    scanf("%f %f", &num1, &num2);
    if(operacao == '+'){
        printf("resultado da operacao: %.2f", num1+num2);
    }else if(operacao == '-'){
        printf("resultado da operacao: %.2f", num1-num2);
    }else if(operacao == '/'){
        printf("resultado da operacao: %.2f", num1/num2);
    }else if(operacao == '*'){
        printf("resultado da operacao: %.2f", num1*num2);
    }else{
        printf("ERROR");
    }
    return 0;
