#include<stdio.h>
void main(){
	int a,pos,n;
	int val;
	int arr[100];
	printf("enter the value of n :");
	scanf("%d", &n);

	for(a=0;a<n;a++){
		printf("enter the value at index %d :- ", a);
		scanf("%d", &arr[a]);
	}
		printf("enter the value of pos :");
	scanf("%d", &pos);
		printf("enter the value at index %d :-", pos);
	scanf("%d", &val);
	for(a=n-2;a>=pos;a--){
		arr[a+1] = arr[a];
		arr[pos] = val;
	}
	printf("updated array is : ");
	for(a=0;a<n;a++)
	printf("%d ", arr[a]);
}
