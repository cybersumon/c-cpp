#include<stdio.h>
int main()
{
    int i,j;
    for (i = 0; i <= 9; i++)
    {
        printf("\n");
        for ( j = 9; j < i; j--)
        {
            printf("*");
        }
    }
    return 0;
}
