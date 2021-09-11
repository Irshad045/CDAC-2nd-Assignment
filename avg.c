//write a program to calculate their average.
#include<stdio.h>
int main()
{
	int phy,che,math,bio,hindi;
	int avg;
	printf("enter the marks obtained in phy\n");
	scanf("%d",&phy);
	printf("enter the marks obtained in che\n");
	scanf("%d",&che);
	printf("enter the marks obtained in maths\n");
	scanf("%d",&math);
	printf("enter the marks obtained in bio\n");
	scanf("%d",&bio);
	printf("enter the marks obtained in hindi\n");
	scanf("%d",&hindi);
	avg=(phy+che+math+bio+hindi)/5;
	printf("here is your average marks %d",avg);
}
