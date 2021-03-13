//count words in sentence

#include<stdio.h>
void main(){
	char st[100];
	int i,j,count=0;
	printf("enter the sentence :- ");
	gets(st);
	
//	strrev(st);
//	printf("%s", st);

for(i=0;st[i]!='\0';i++){
	count++;
	}
	for(j=count-1;j>=0;j--){
		st[j++] = st[i];
	}
	printf("%s", st);
}

