#include<stdio.h>
int main(){
	
	int a,b,h;
	printf("value of h :");
	scanf("%d", &h);
	for(a=1;a<=h;a++){
		for(b=1;b<=a;b++){
			printf("$", b);
		}
		printf("\n");
	}
	return 0;
}
