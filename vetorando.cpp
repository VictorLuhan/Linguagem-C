#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int v[10], p;
for(p=0;p<10;p++){
	printf("Digite numero:");
	scanf("%d",&v[p]);
	if((p!=0)&&(p%2==0)){
		printf("\nv[%d] = %d",p,v[p]);
	}
}
}
