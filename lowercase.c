#include<stdio.h>
void main(){
	char st[100];
	printf("enter the sentence :- ");
	scanf("%[^\n]s", st);
	strlwr(st);
	
	printf("%s", st);
}
