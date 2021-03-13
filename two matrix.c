#include<stdio.h>
void main(){
	int i,j;
	int r1,r2,c1,c2;
	int a,b;
	int a[100][100],b[100][100],sum[100][100];
	printf("enter the number of r1 ");
	scanf("%d", &r1);
	printf("enter the numbers of c1 ");
	scanf("%d", &c1);
	
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("enter the value at index %dX%d ", i,j);
			scanf("%dX%d", &arr[i][j]);
		}
	}
		printf("enter the number of r2 ");
		scanf("%d", &r2);
	printf("enter the numbers of c2 ");
	scanf("%d", &c2);
	
	for(a=0;a<r2;a++){
		for(b=0;b<c2;b++){
			printf("enter the value at index %dX%d ", a,b);
			scanf("%dX%d", &arr[a][b]);
		}
	}
	printf("matrix formation of FIRST array \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d" , arr[i][j]);
		}
		printf("\n");
	}
		printf("matrix formation of SECOND array \n");
	for(a=0;a<r2;a++){
		for(b=0;b<c2;b++){
			printf("%d" , arr[a][b]);
		}
		printf("\n");
	}
}
