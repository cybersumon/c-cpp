#include<stdio.h>
int main()
{
    int n,sum;
    printf("Please Enter a Number : ");
    scanf("%d",&n);

    sum = (n * (n+1))/2;

    printf("Summaton is : %d\n",sum);
    return 0;

}