#include<stdio.h>
void main(){
	char st[100];
	char a[100];
	int i,flag;
	printf("enter the sentence :- ");
	scanf("%[^\n]s", st);
	printf("enter the second sentence :- ");
	scanf("%s", a);
	
	flag = strcmp("st","a");
	printf("%d", flag);
}
	
