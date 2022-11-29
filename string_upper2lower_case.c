// un complited
#include<stdio.h>
int main()
{
    char country[] = {'B','A','N','G','L','A','D','E','S','H'};
    int i,lenght;
    printf("%s\n",country);
    lenght = 10;
    for ( i = 0; i < lenght; i++)
    {
        if(country[i] >= 65 && country[i] <= 90){
            country[i] = 'A' - (country[i] + 'a');
        }
    }
    printf("%s\n",country);
    return 0;

    
}