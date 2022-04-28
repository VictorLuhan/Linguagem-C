#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int tabuada(int n, int c){
	return n*c;
}
main(){
	int cont,num;
printf("Digite numero:");
scanf("%d",&num);
printf("\n------ TABUADA ------\n");
for(cont=0;cont<=10;cont++)	{
	printf("%d X %d = %d\n",num,cont,tabuada(num,cont));
}
}
