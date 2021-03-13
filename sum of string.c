#include<stdio.h>
void main(){
	char st[100],sum[100];;
	char a[100];
	int i;
	printf("enter the sentence :- ");
	scanf("%[^\n]s", st);
		printf("enter the second sentence :- ");
      	scanf("%s", a);
	
	strcat(st,a);
	printf("%s", st);
}
