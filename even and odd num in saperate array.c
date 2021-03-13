//sotre all even and odd num in saperate array
#include<stdio.h>
#define max 15
void main(){
	int a,n;
	int arr[max];
	printf("enter the value of n : ");
	scanf("%d", &n);
	for(a=0;a<n;a++){
		printf("enter the value at index %d : ", a);
		scanf("%d", &arr[a]);
		
	}printf("even numbers are : ");
	for(a=0;a<n;a++){
		if(arr[a]%2==0)
		printf("%d", arr[a]);
		else if(arr[a]%2!=0)
		printf("%d", arr[a]);
		
	}
}
