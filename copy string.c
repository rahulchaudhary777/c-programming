#include<stdio.h>
void main(){
	char st[100];
	char a[100];
	int i;
	printf("enter the sentence :- ");
	scanf("%[^\n]s", st);
//	strcpy(a,st);
//	printf("copy sentence is %s", a);

for(i=0;st[i]!='\0';i++){
	a[i] = st[i];
}	 
a[i] = '\0';
printf("copy sentence is %s", a);
}
