#include<stdio.h>
void main(){
	int a,n,found,count=0;
	int arr[100];
	int value;
	printf("enter the lemngth of array :- ");
	scanf("%d", &n);
	for(a=0;a<n;a++){
		printf("enter the value at index index %d :- ",a);
		scanf("%d", &arr[a]);
	}
	
	printf("enter the compairing value :- ");
	scanf("%d", &value);
	
	for(a=0;a<n;a++){
		if(arr[a]==value){
			count++;
			printf("\nelement found at index %d ", a);
			found = 1;
		}
	}
	if(!found){
		printf("\ngiven element is not found");
	}
	printf("\ncounting of duplicates number %d ", count);
	
}
