//grade
#include<stdio.h>
int main()
{
   int score;

   printf("Enter score( 0-100 ): ");
   scanf("%d", &score);

   switch( score / 10 )
   {

   case 10:
   case 9:
     printf("Grade: A+");
     break;

   case 8:
     printf("Grade: A");
     break;

   case 7:
     printf("Grade: B+");
     break;

   case 6:
     printf("Grade: B");
     break;

   case 5:
     printf("Grade: C");
     break;

   default:
     printf("Grade: Fail");
     break;

   }

   return 0;
}
