#include<stdio.h>
int main(){
	 int a,b,c,d;
	 printf("enter the value : ");
	 scanf("%d", &a);
	  printf("enter the value : ");
	 scanf("%d", &b);
	  printf("enter the value : ");
	 scanf("%d", &c);
	 d = a>b?(a>c?a:c):(b>c?b:c);
	printf("maximum number is : %d", d);
	return 0;
	}
