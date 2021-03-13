//an array of N numbers and display it
#include<stdio.h>
void main(){
	int a,n;
	int arr[20];
	printf("enter the value of n :"); 
	scanf("%d", &n);
	for(a=0;a<n;a++)
	{printf("enter the value at index %d: ", a);
	scanf("%d", &arr[a]);
	}
	for(a=0;a<n;a++){
		printf("%d ", arr[a]);
	}
	
	
	
}
