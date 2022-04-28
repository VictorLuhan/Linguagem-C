#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int fatorial(int n){
int cont,fat=1;	
	for(cont=1;cont<=n;cont++){
		fat=fat*cont; 
	}
	return fat;
}
main(){
	int num;
	printf("Digite numero:");
	scanf("%d",&num); 
	printf("\nO fatorial de %d = %d",num,fatorial(num));
}
