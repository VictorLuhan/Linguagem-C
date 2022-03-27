#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){

float nota1,nota2,media;
    printf("Digite as duas notas do aluno:\n");
    scanf("%f %f", &nota1,&nota2);
    media = (nota1+nota2)/2;
    if(media >= 40){
        if(media <= 69){
            printf("Esta no exame final!\n");
            float exame;
            printf("Digite a nota do exame final:\n");
            scanf("%f", &exame);
            media = media + exame;
            if(media >= 100){
                printf("Aprovado!");
            }else{
                printf("Reprovado!");
            }
        }else{
            printf("Aprovado!");
        }
    }else{
        printf("ERROR");
        printf("Reprovado!");
    }
    return 0;
}
