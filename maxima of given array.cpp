#include<stdio.h>
int main(){
	int a,n,i;
	int arr[25];
	int max=0;
	printf("enter the value of n :");
	scanf("%d", &n);
	printf("enter the element of the array");
	for(a=0;a<n;a++){
		scanf("%d", &arr[i]);
	}
		max=arr[0];
		for(a=0;a<n;a++){
			if(arr[i]>max){
			max = arr[i];}
		}
		printf("\nmaximam num of given array is : %d", max);
		return 0;
}
