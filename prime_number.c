#include<stdio.h>
int main()
{
    int i,num,count = 0;

    printf("Enter a Positive Number : ");
    scanf("%d",&num);
    for (i = 2;i < num; i++)
    {
       if (num%i==0)
       {
        count++;
        break;
       }

    }
    if (count == 0)



         printf("This is prime number");

    else
    {
       printf("This is not a prime number");
    }
    return 0;



}

