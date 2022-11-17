#include<stdio.h>
int main()
{
    int d;
    printf(" Enter a digit :");
    scanf("%d",&d);

    switch (d){

    case 0:
    printf("Zero");
    break;

    case 1:
    printf("One");
    break;

    case 2:
    printf("Two");
    break;

    default:
    printf("Invlide");
    }

}
