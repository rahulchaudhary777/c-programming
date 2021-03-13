#include<stdio.h>
void main(){
int a,n;
printf("enter the value");
scanf("%d", &n);
for(a=1;a<=n;a++){
	if(n%a==0)
	printf("prime number ");
}	
}
