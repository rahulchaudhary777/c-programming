#include<stdio.h>
void main(){
	int a,n,b;
	int trump=0;
	int biden=0;
	int arr[a];
		printf("enter the numbers of states :");
	scanf("%d", &n);
	printf("vote for biden input 1 \n vote for trump input 0\n");
	for(a=0;a<n;a++){
			printf("enter your vote  in 0 or 1 : ");
		scanf("%d",&arr[a]);
	}
	for(a=0;a<n;a++){
		if(arr[a]==0)
		trump++;
		else if(arr[a]==1)
		biden++;
	}
	printf("trump got %d votes", trump);
	printf("\nbiden got %d votes", biden);
	if(trump>biden)
	printf("\ntrump won the president election");
	else if(trump<biden)
	printf("biden won the president election\n");
	else if(trump=biden)
	printf("decision is taking by lottary");
}
