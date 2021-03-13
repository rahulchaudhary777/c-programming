#include<stdio.h>
void main(){
	char st[100];
	int i;
	printf("enter the sentence\n");
	scanf("%[^\n]s", st);
	
	// logic section
	for(i=0;st[i]!='\0';i++){
		if(st[i]>='A' && st[i]<='Z')
		st[i] = st[i]+32;
	}
	printf("lowercase string %s", st);
}
