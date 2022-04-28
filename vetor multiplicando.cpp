#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
int v1[20],v2[20],v3[20];
int p;
printf("\n---- PREENCHIMENTO DO VETOR 1 ----\n");
for(p=0;p<5;p++){
	printf("Digite numero:");
	scanf("%d",&v1[p]);
}
printf("\n\n---- PREENCHIMENTO DO VETOR 2 ----\n");
for(p=0;p<5;p++){
	printf("Digite numero:");
	scanf("%d",&v2[p]);
	
}
printf("\n\n---- IMPRESSAO VETOR 3 ----\n");
for(p=0;p<5;p++){
	v3[p]=v1[p]*v2[p];
	printf("\n v3[%d] = %d",p,v3[p]);
}
}
