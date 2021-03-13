//an array of N numbers and display it in reverse order
#include<stdio.h>
int main()
{
  	int a,n;
	int arr[25];
	printf("enter the value of n :");
	scanf("%d", &n);
	for(a=0;a<n;a++){
		printf("enter the value at index %d : ", a);
		scanf("%d", &arr[a]);
	
	}printf("reverse numbers are : ");
	for(a=n-1;a>=0;a--)
		printf("%d ", arr[a]);
	

    return 0;
}

