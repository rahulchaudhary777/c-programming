#include<stdio.h>
void main(){
	int a,n,b=1;
	printf("value of a :");
	scanf("%d", &a);
	printf("value of factorial %d is : \n", a);
	while(a>0){
		b = b*a;
	printf("%d*", a);
		a--;}
			printf(" = %d", b);
}
