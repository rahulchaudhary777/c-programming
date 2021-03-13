#include<stdio.h>
void main(){
	
	int base,power,b=1,a;
	printf("enter the base :");
	scanf("%d", &base);
		printf("enter the power :");
	scanf("%d", &power);
	printf("%d power of %d = ", power,base);
	for(a=1;a<=power;a++){
		b = b*base;
	}
	printf("%d", b);
}
