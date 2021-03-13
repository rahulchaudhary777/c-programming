#include<stdio.h>
void main(){
	int r,c;
		int a[100][100],b[100][100],sum[100][100];
	int i,j;
	printf("enter the number or r");
	scanf("%d", &r);
		printf("enter the number or c");
	scanf("%d", &c);
	printf("values of first matrix \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the value of %dX%d ", i,j);
			scanf("%dX%d",&a[i][j]);
		}
	}
		printf("values of second matrix \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the value of %dX%d ", i,j);
			scanf("%dX%d", &b[i][j]);
		}
	}	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j] = a[i][j]+b[i][j];
		}
	}
	printf("sum of two array is \n");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d ", sum[i][j]);
		}
		printf("\n");
		}
}
