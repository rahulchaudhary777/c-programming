#include<stdio.h>
#define max 25
int main(){
	int a,n;
	int arr[max];
	printf("enter the value of n :");
	scanf("%d", &n);
	for(a=0;a<n;a++){
		printf("enter the value of index %d : ", a);
		scanf("%d", &arr[a]);
	}
	
	printf("even numbers are : ");
	for(a=0;a<n;a++){
		if(arr[a]%2==0)
		printf("%d ", arr[a]);}
		printf("\nodd numbers are :");
		for(a=0;a<n;a++){
		if(arr[a]%2!=0)
		printf("%d ", arr[a]);
	}return 0;
}
