#include<stdio.h>
void main(){
	int a,n;
	int val,pos;
	int arr[100];
	printf("enter the value of n :");
	scanf("%d", &n);
	for(a=0;a<n-1;a++){
		printf("enter the value at index %d :- ", a+1);
		scanf("%d", &arr[a]);
	}
	printf("enter the position ");
	scanf("%d", &pos );
	printf("enter the insirting value ");
	scanf("%d", &val);
	for(a=n-1;a>=pos;a--)
		arr[a+1] = arr[a];
		arr[pos-1] = val;
	
	printf("updated array is :");
	for(a=0;a<n;a++)
	printf("%d ", arr[a]);
	}
