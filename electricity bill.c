#include<stdio.h>
void main(){
	
	float a,b;
	printf("electricity units :");
	scanf("%f", &a);
	if(a<=50)
	{printf("charge per unit : 0.5 Rs");
	printf("payable bill = %d", a*0.5);
	}
	else if(a>50 || a<=150)
		{printf("charge per unit : 0.75 Rs");
	printf("payable bill = %d", a*0.75);
	}
	else if(a>150 || a<=250)
	{printf("charge per unit : 1.20 Rs");
	printf("payable bill = %d", a*1.20);
	}
	else if(a>250)
	{printf("charge per unit : 1.5 Rs");
	printf("payable bill = %d", a*1.5);
	}
	
}
