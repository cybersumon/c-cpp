#include<stdio.h>
int main()
{
    int v,t,s,u,a;

    printf(" Enter :");
    scanf("%d",&v);

    printf(" Enter t :");
    scanf("%d",&t);

    a = v/t;
    u = v - a*t;

    s = (2*t)*(u + a*t);

    printf("S = : %d",s);
}
