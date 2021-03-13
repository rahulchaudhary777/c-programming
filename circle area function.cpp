#include<stdio.h>
float dia(float a);      //function declration
float cir(float b);
float area(float c);
int main()
{
	int p,q,r;
	float x,y,z;
	printf("enter the radius ");
	scanf("%d", &r);
	x = dia(r);       //function call
	y = cir(r);
	z = area(r);
	printf("diameter is %f\ncircumference %f\n area %f\n", x,y,z);
 } 
 float dia(float a){            //function defination
 	float p;
 	p = 2*a;
 	return(p);
 }
  float cir(float b){
 	float p;
 	p = 2*b*3.14;
 	return(p);
 }
  float area(float c){
 	float p;
 	p = c*c*3.14;
 	return(p);
 }
