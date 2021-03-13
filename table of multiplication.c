#include<stdio.h>
void main()
{
	int a,b,c,n;
	printf("value of n :");
	scanf("%d", &n);
	printf("value of c :");
	scanf("%d", &c);

	for(a=1;a<=n;a++){
		b = c*a;
			printf("c*%d=", a);
		printf("%d\n", b);
	}
}
