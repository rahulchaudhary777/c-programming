#include<stdio.h> 
void main(){
	int a,b,power;
	float hypo;
	printf("value of base = ");
		scanf("%d", &a);
	printf("value of height = ");
	scanf("%d", &b);
/*	hypo = sqrt(a*a+b*b);
	printf("hypotenuse is = %f", hypo);*/
	power = pow(a,b);
	printf("%d", power);
}
