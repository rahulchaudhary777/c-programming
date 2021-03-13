#include<stdio.h>
void main(){
char a[100],i,space=0;
int count=0;
printf("enter the name :- ");
scanf("%s", &a);
for(i=0;a[i]!='\0';i++){

count++;
if(a[i]==' ')
space++;}
printf("%d", count);
printf("%d", space);
}
