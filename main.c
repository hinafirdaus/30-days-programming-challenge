//WAP to find divisor or factorial of a given number

#include <stdio.h>
#include <stdlib.h>


int main()
{
 int a,i, choice, fact=1;

 printf("Enter a number for divisor or factorial: ");
 scanf("%d", &a);
printf("\nChoose a option from below:- ");
printf("\n1. Find divisor of a number");
printf("\n2. Find factorial of a number");
printf("\n3. Exit");
scanf("%d", &choice);

switch(choice)
{
case 1:
 for(i=1;i<=a;i++)
 {
     if(a%i==0)
     {
         printf("%d\n",i);
     }
 }
 break;

case 2:
    for(i=1;i<=a;i++)
    {
        fact= i*fact;
    }
    printf("%d", fact);
break;

case 3:
    printf("Bye bye!");
}
}

