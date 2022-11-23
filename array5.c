#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int ab[10];
    int i,j;
    for ( i = 0,j=9; i < 10; i++,j--)
    {
       ab[j] = a[i];
    }
    for ( i = 0; i < 10; i++)
    {
        a[i] = ab[i];
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
    
    
    
}