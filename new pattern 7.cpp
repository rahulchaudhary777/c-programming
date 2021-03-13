#include<stdio.h>
int main(){
	
	int i,j,n;
	int a;
	printf("enter the length ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		for(j=i;j<n;j++)
			printf(" ");
		
		for(j=0;j<=i;j++)
		printf("%d", i);
		
		for(j=0;j<i;j++)
		printf("%d", i);
		
		printf("\n");
	}
	return 0;
}
