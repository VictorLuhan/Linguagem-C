#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    char dezena[10][10] = {{""}, {""},{"vinte"}, {"trinta"}, {"quarenta"}, {"cinquenta"}, {"sescenta"}, {"setenta"}, {"oitenta"}, {"noventa"}};
    char unidade[10][10] = {{"zero "},{"um "}, {"dois "}, {"tres "}, {"quatro "}, {"cinco "}, {"seis "},{"sete "}, {"oito "}, {"nove "}};
    printf("Digite um numero de 0 a 99:\n");
    scanf("%d", &num);
    if(num>=10 && num<20){
        switch(num){
            case 0:printf("zero ");
            break;
            case 10:printf("dez ");
            break;
            case 11:printf("onze ");
            break;
            case 12:printf("doze ");
            break;
            case 13:printf("treze ");
            break;
            case 14:printf("quatorze ");
            break;
            case 15:printf("quinze ");
            break;
            case 16:printf("dezesseis ");
            break;
            case 18:printf("dezoito ");
            break;
            case 19:printf("dezenove ");
            break;
        }
    }
    else if(num > 99 || num < 0){
        printf("numero invalido");
    }else{
        printf(dezena[num/10]);
        if(num%10 != 0){
            printf(" e ");
            printf(unidade[num%10]);
        }else{
            printf("");
        }
    }
    return 0;
}
