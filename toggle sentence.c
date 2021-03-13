#include<stdio.h>
void main(){
	char st[100];
	int i;
	printf("enter the sentence :- ");
	scanf("%[^\n]s", st);
	for(i=0;st[i]!='\0';i++){
		if(st[i]>='a'&&st[i]<='z'){
			st[i] = st[i]-32;
		}
		else if(st[i]>='A'&&st[i]<='Z'){
			st[i] = st[i]+32;
		}
	}
	printf("toggle sentense is %s", st);
}
