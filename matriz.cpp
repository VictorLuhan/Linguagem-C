#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int m1[3][5],m2[3][5],m3[3][5];
	int l,c;
printf("\n---- PREENCHIMENTO DA MATRIZ 1 ----\n");
for(l=0;l<3;l++){
	for(c=0;c<5;c++){
		printf("Digite numero:");
		scanf("%d",&m1[l][c]);
	}
}
printf("\n---- PREENCHIMENTO DA MATRIZ 2 ----\n");
for(l=0;l<3;l++){
	for(c=0;c<5;c++){
		printf("Digite numero:");
		scanf("%d",&m2[l][c]);
		m3[l][c]=m1[l][c]+m2[l][c];
	}
}
printf("\n\n---- MATRIZ 1 ----");
for(l=0;l<3;l++){
	 printf("\n");
	for(c=0;c<5;c++){
		printf("  %d  ",m1[l][c]);
	}
}printf("\n\n---- MATRIZ 2 ----");
for(l=0;l<3;l++){
	 printf("\n");
	for(c=0;c<5;c++){
		printf("  %d  ",m2[l][c]);
	}
}
printf("\n\n---- IMPRESSAO da SOMA DAS MATRIZES ----");
for(l=0;l<3;l++){
	 printf("\n");
	for(c=0;c<5;c++){
		printf("  %d  ",m3[l][c]);
	}
}
}
