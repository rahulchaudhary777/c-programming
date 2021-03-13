#include<stdio.h>
#define max 16
int main()
{int a,n,p,q,w;
int arr[max];
printf("enter the value of n :");                             
scanf("%d", &n);
for(a=0;a<n;a++){
	printf("enter the value at index %d : ", a);
	scanf("%d", &arr[a]);
}
/*for(a=0;a<n;a++){
	if(arr[a]>0)
	p++;                                                       // IF COUNT ONIY NUM OF POSITIVE & NEGATIVE & ZERO NUMBERS
	else if(arr[a]<0)
	q++;
	else if(arr[a]==0)
	w++;
}
printf("positive num are : %d \nnegative numbers are : %d\nzero num are : %d", p,q,w);
return 0;*/
printf("\npositive numbers are : ");
for(a=0;a<n;a++){
	if(arr[a]>0)
	printf("%d ", arr[a]);}
	printf("\nnegative numbers are : ");
	for(a=0;a<n;a++){                                       //IF COUNT VALUE OF POSITIVE & NEGATIVE & ZERO NUMBERS & PRINT THAT NUMBERS
	 if(arr[a]<0)
	printf("%d ", arr[a]);}
		printf("\nzero numbers are : ");
	for(a=0;a<n;a++){
	 if(arr[a]==0)
	printf("%d ", arr[a]);}

}
