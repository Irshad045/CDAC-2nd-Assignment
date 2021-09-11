//leap or not.
#include<stdio.h>  
#include<conio.h>  
void main() {  
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
   if(year%4==0)
   {
   	printf("leap year",year);
   }
   else
   printf("not leap year",year);
} 
