#include<stdio.h>
void main(){
	int a,n,b,c;
	int arr[100];
	printf("enter the value of n : ");
	scanf("%d", &n);
	for(a=0;a<n;a++){
		printf("enter the value at index %d ", a);
		scanf("%d", &arr[a]);
	}
	for(a=0;a<n-1;a++){
		for(b=0;b<n-1-a;b++)
		if(arr[b]>arr[b+1])
		{c=arr[b];
		arr[b] = arr[b+1];
		arr[b+1] = c;	}
		
	}
	for(a=0;a<n;a++)
	printf("%d ", arr[a]);
}
