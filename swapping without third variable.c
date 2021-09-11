//swaping two numbers without using third variable.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("numbers without swaping is a= %d b= %d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("here is your swapped result a= %d b= %d\n",a,b);
}
