/*wap a menu driven calculator program that perform following operations 
-Sum
-sub
-division 
-multiplication
-Mod */
#include<stdio.h>
int main()
{
	int i;
	int a,b,c;
	printf("enter 1 for addition\n");
	printf("enter 2 for subtraction\n");
	printf("enter 3 for division\n");
	printf("enter 4 for multiplication\n");
	printf("enter 5 for Mod\n");
	printf("enter your choice: ");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("enter two numbers\n");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("here is your sum--> %d",c);
			break;
		case 2:
			printf("enter two numbers\n");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("here is your subtracted result--> %d",c);
			break;
		case 3:
			printf("enter two numbers\n");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("here is your division result--> %d",c);
			break;
		case 4:
			printf("enter two numbers\n");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("here is your multipliedd result--> %d",c);
			break;
		case 5:
			printf("enter two numbers\n");
			scanf("%d%d",&a,&b);
			c=a%b;
			printf("here is your mod result--> %d",c);
			break;
	}
}
