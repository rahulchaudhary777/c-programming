#include<stdio.h>
int main(){
	int a,n;
	int arr[25];
	int min=0;
	printf("enter the value of n :");
	scanf("%d", &n);
	printf("enter the elements of array :");
	for(a=0;a<n;a++){
	scanf("%d", &arr[a]);
	}
	min = arr[0];
		for(a=0;a<n;a++){
			if(arr[a]<min)
			min = arr[a];
		}
		printf("\nminimum num of given array is : %d", min);
		return 0;
}


