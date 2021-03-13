#include<stdio.h>
//display natural num. and their sum
int main(){
	int a = 1, b = 0,n;
	printf("enter value of n :");
	scanf("%d", &n);
		printf("\n first %d natural numbers are :\n",n);
	while(a<=n){
		printf("%d ", a);
	b = b+a;
	a = ++a;	
	}
 printf("\nsum is : %d\n", b);
	return 0;
}
