#include<stdio.h>
void main(){
	int a,b,h;
	printf("enter the value of h : ");
	scanf("%d", &h);
	for(a=1;a<=h;a++){
		for(b=1;b<=h-a;b++){
		
		printf(" ");}
		for(b=1;b<=(2*a-1);b++)
	{
			if(b==1 || b==2*a-1)
		printf("*");
	}
		printf("\n");
	}
}
