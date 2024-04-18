#include <stdio.h>
int main()
{
   float radius;
   float pi;
   float area;
   printf("Enter the value of radius:");
   scanf("%f",&radius);
   printf("Enter the value of pi :");
   scanf("%f",&pi);
   area = 3.14*(radius*radius);
   printf("%f",area);
   return 0;
}