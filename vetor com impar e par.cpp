#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int v[10],qp=0,qi=0, p;
for(p=0;p<10;p++){
	printf("Digite numero:");
	scanf("%d",&v[p]);
	if(v[p]%2==0){
		qp++;
	}else{
		qi++;
	}
}
printf("\n\nQtd de numeros pares = %d",qp);
printf("\nQtd de numeros impares = %d",qi);
}
