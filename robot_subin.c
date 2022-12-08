#include<stdio.h>
int main()
{
    int x,y;
    char c;

    printf("Please enter the initial position: ");
    scanf("%d %d",&x,&y);

    while (1)
    {
        scanf("%c",&c);

        if (c == 's')
        {
           break;
        }

        else if (c == 'u')
        {
            x--;
        }
        else if (c == 'd')
        {
            x ++;
        }
        else if (c=='r')
        {
           y++;
        }
        else if (c=='l')
        {
           y--;
        }
        
        
        
        
        
    }
    printf("Final position of the robot is: %d, %d\n",x,y);
    return 0;
    
}