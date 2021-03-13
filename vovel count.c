#include<stdio.h>
void main(){
	char st[100];
	int i,j;
	int a=0,b=0,count=0;
	
	//print section
	printf("enter hte sentence :- ");
	scanf("%[^\n]s", st);
	
	for(i=0;st[i]!='\0';i++){
		if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'){
			count++;
		}
		else
		a++;}
		
		printf("vovels are :- %d\nconsonante are :- %d", count,a);
	}
