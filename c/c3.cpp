#include<stdio.h>
int main(void)
{
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(k=1;k<=7-2*i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=2;i++){
		for(j=1;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=1+2*i;k++){
			printf("*");
		}
		printf("\n");
	}
 } 
