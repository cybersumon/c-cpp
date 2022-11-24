//Global Variable test function
#include<stdio.h>

double pi = 3.14;

void my_fuc()
{
    pi = 3.1416 /*Change the pi valu for testing*/
    return 0; /* if function return type is void return 0; is not mendatory*/

}

int main()
{
    printf("%lf\n",pi);// here pi value is 3.14
    my_fuc();
    printf("%lf\n",pi);

    return 0;
    

}

/*program is not complite*/