#include<stdio.h>
int max(int a,int b);
int main(){
	
	int p,q,r;
	printf("enter two values ");
	scanf("%d %d", &p,&q);
	r = max(p,q);
	printf("maximum value %d", r);
}

int max(int a,int b){
	int c;
	if(a>b)
	c = a;
	else
	c = b;
	return(c);
}
