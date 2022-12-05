#include<stdio.h>
int main()
{
    int i,j;
    for (i = 0; i <= 9; i++)
    {
        printf("\n");
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
    }
    for (i = 9; i <= 0; i++)
    {
        printf("\n");
        for ( j = 0; j <= i; j++)
        {
            printf("*");
        }
    }
    return 0;
}
