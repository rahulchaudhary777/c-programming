#include<stdio.h>
int main(){
	
	int i,j,n;
	char a = 'a';
	printf("enter the length ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		for(j=i;j<n;j++)
			printf(" ");
		
		for(j=1;j<=i;j++){
		printf("%c", a);
		a++;
		}
		for(j=1;j<i;j++){
		printf("%c", a);
		a++;}
		
		printf("\n");
	}
	return 0;
}
