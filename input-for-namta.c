#include<stdio.h>
int main()
{
    int i,n,r;
    i = 1;
    printf("Enter A Number :");
    scanf("%d",&n);
    while(i <= 10){
        printf("%d X %d = %d\n",n,i,n*i);
        i=i+1;
    }

    return 0;


}
