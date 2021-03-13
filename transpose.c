#include<stdio.h>
void main(){
	int i,j;
	int r1,r2,c1,c2;
	int a,b;
int temp;
	int arr[100][100];
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
	printf("matrix formation of FIRST array \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d" , arr[i][j]);
		}
		printf("\n");
	}
	
	//transpose of matrix
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			if(i<j){
				temp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = temp;
			}
		}
	}
}
