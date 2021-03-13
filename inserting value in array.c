#include<stdio.h>
void main()
{
	int a,b,value,pos,n;
	int arr[100];
	
	printf("enter the length of array ");
	scanf("%d", &n);
	
	for(a=0;a<n;a++){
		printf("enter the value at index %d :- ", a);
		scanf("%d", &arr[a]);
	}
	
	printf("enter the postion of inserting number ");
	scanf("%d", &pos);
	printf("enter the value of inserting number ");
	scanf("%d", &value);
	
	for(a=n-2;a<=pos;a--){

		arr[a+1] = arr[a];
		arr[pos] = value;}
	
	
	for(a=0;a,n;a++){
		printf("updated array :- %d", arr[a]);
	}
}
