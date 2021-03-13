
#include<stdio.h>
void main()
{
	int feet,head,c, goat ,chicken;
	printf("no. of heads :");
	scanf("%d", &head);
		printf("no. of feets :");
	scanf("%d", &feet);
	c = feet/2;
	goat = c-head;
	chicken = head-goat;
	printf("goats are = %d\n", goat);
		printf("feets are = %d", chicken);
	
}
