#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
int v[20],p,maior=0,menor=99999;
for(p=0;p<5;p++)	{
	printf("Digite numero:");
	scanf("%d",&v[p]);
	if(v[p]>maior){
		maior=v[p];
	}
	if(v[p]<menor){
		menor=v[p];
	}
}
printf("\n\nMaior numero = %d",maior);
printf("\nMenor numero = %d",menor);
}

