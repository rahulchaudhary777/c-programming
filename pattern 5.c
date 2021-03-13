#include<stdio.h>
void main(){
	int a,b,h;
	 char k = 'A';
	printf("enter the value of h :");
	scanf("%d", &h);
	for(a=1;a<=h;a++){
		for(b=1;b<=a;b++){
			printf("%c", k);
			k++;
		}
		k = 'A';
		printf("\n");
	}}
