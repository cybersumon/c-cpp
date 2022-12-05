#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Wellcome to Birthday Gift Program");
    printf("\n\n\n\n\n");

    printf("Enter Birthday boy's or Girls Age : ");
    scanf("%d",&a);
    printf("Ok The age is = %d\n",a);
    printf("please Select Sex\n 1 = Men\n 2 = women\n");
    scanf("%d",&b);
    if (a <= 9 && b ==1 )
    //for ( a <= 9 && b == 1; a < 100; )
    {
       printf("Our Sujjest Gift IS :\n Chocklet\n Boll\n Bat\n");
    }


    return 0;

}
