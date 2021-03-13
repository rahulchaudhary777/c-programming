#include<stdio.h>
int main(){
	int a = 1, b=1,n,c	;
	printf("value of a : ");
	scanf("%d", &a);
		printf("value of b : ");
	scanf("%d", &b);
	while(a<=10){
		while(b<=n){
			c = a*b;
			printf("multipication is : \n", c);
			b = ++b;
		}
		a = ++a;
	}
	return 0;
}
