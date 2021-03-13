#include<stdio.h>
void main(){
	char st[100],p[20],q[20],r[20];
	int i,j;
	int a=0,b=0,count=0;
	
	printf("enter hte sentence :- ");
	scanf("%[^\n]s", st);
	
	for(i=0;st[i]!='\0';i++){
		if(st[i]>='a'&&st[i]<='z'||st[i]>='A'&&st[i]<='Z'){
			count++;
			p[i] = st[i];
		}
		else if(st[i]>=48&&st[i]<=57){
		q[i] = st[i];
		a++;}
	else if(st[i]>=32&&st[i]<=47||st[i]>=58&&st[i]<=64||st[i]>=91&&st[i]<=96){
	r[i] = st[i];
	b++;
	}
	}
	printf("alphabates are :- %d\n digits are :- %d\n special characters are :- %d", count,a,b);
	printf("alphabates are :- %s\n digits are :- %s\n special characters are :- %s", p,q,r);
}
