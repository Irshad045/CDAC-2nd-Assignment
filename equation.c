#include<stdio.h>
int main()
{
	int a,b,c=1,f,x;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of x\n");
	scanf("%d",&x);
	f=a*x*x+b*x+c;
	printf("here is the result of your equation %d",f);
}
