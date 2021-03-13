#include<stdio.h>
int main()
{
	int a ,b,n;
	printf("input number of terms : ");
	scanf("%d", &n);
	printf("odd numbers are : %d ", a);
	while(a<=n){
	
		printf("\n%d", 2*a-1);
		b += 2*a-1;
		a = ++a;
	
	}
	printf("\nsum of odd natural numbers upto %d terms %d", n,b);
	return 0;
	
}
