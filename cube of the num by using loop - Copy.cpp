#include<stdio.h>
int main(){
	
int a=1,n,b=0;
printf("enter the value of n :");
scanf("%d", &n);

while(a<=n){
	b = a*a*a;

		printf("number is : %d and cube of the %d is : %d\n", a,a,b);
			a = ++a;

}

}
