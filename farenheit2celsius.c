#include<stdio.h>
int main()
{
    double celsius,farenheit;
    printf("Enter the temperature in farenheit: ");
    scanf("%lf",&farenheit);

    celsius =  (farenheit - 32) * 5/9;
    printf("Temperature in celsius is: %0.2lf\n",celsius);

    return 0;
}