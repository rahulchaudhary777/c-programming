#include<stdio.h>
void main(){
	char st[100];
	int i,count=0,a;
	printf("enter the sentence\n");
	scanf("%[^\n]s", st);
	
	for(a=0;st[a]!='\0';a++){
		count++;
	}
	printf("%d", count);
}
