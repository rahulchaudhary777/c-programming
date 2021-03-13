#include<stdio.h>
void main(){
	int a,n,b,c,temp;
	int arm = 0;
	printf("enter the value :");
	scanf("%d", &n);
	n=temp;

	while(n!=0){
		b = n%10;
		c = pow(b,3);
		printf("%d ", c);
		arm = arm+c;
		n = n/10;
	}
	printf("\n %d", arm);

	}
