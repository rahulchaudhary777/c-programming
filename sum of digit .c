//sum of digit of num
#include<stdio.h>
void main(){
	int a,n,b=0;
	printf("value of n :");
	scanf("%d", &n);
	printf("sum of digits of %d \n", n);
	while(n>0){
		a = n%10;
		b = b+a;
		n /=10;
		printf("+%d", a);
	}printf(" = %d", b);
	}
