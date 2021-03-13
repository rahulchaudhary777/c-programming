#include <stdio.h>
void main(){

	int amount,a;
	printf("value of amount :");
	scanf("%d", & amount);
	if(amount>25000)
{
		printf("GOLD\n");
	printf("you got 20%% discount\n");
     a = amount*20/100;
	printf(" discount amount = %d\n", a);
    printf("payable amount = %d", amount-a);
}
	
	else if(a<=25000 || a>=10000)
{
		printf("SILVER\n");
		printf("you got 10%% discount\n");
     a = amount*10/100;
	printf(" discount amount = %d\n", a);
     printf("payable amount = %d", amount-a);
}
else if(a<10000){
		printf("BRONZE\n");
		printf("you got 5%% discount\n");
     a = amount*5/100;
	printf(" discount amount = %d\n", a);
     printf("payable amount = %d", amount-a);
}
}

