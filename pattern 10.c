#include<stdio.h>
void main(){
	int a,b,h;
	printf("enter the value of h : ");
	scanf("%d", &h);
	for(a=1;a<=h;a++){
		for(b=1;b<=h-a;b++)
		printf(" ");
		for(b=1;b<=a;b++)
		printf("%d", a);
		
		printf("\n");	}
}

