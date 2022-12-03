#include<stdio.h>
int main()
{
    int a[3][3],i,j,k;

    for ( i = 0; i < 2; i++)
    {   printf("first loop start\n");
        for ( j = 0; j < 2; j++)
        {
            printf("second lop start\n");
            for ( k = 0; k < 2; k++)
            {
                printf("Third loop start\n");
            }
        }
       printf("first loop close\n");
    }
    return 0;

}
