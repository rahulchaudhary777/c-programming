#include<stdio.h>
void main(){
	char st[100];
	int i;
	printf("enter the string \n");
	scanf("%[^\n]s", st);
	for(i=0;st[i]!='\0';i++){
		if(st[i]>='a' && st[i]<='z')
		st[i] = st[i]-32;
	}
	printf("%s", st);
}
