#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
void desenha(){
    int i;
    for (i = 0; i <= 10; i++){
        printf("--");
    }
} 

main(){
	desenha( );
	printf("\nUsando procedimento!\n");
    desenha();
}
