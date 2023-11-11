#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(0));
    char start,dummy;
    char again[]="";
    while(start!='n')
    {
        printf("\nDo you want to play ? (y to start n to exit) : ");
        scanf("%c",&start);
        scanf("%c",&dummy);
        if (start=='n')
        {
            printf("\nbye...");
            break;
        }
        if (start=='y')
        {
            printf("\nLet\'s start!\n");

        }
        else
        {
            printf("\nWrong input ! (type only y or n) ...\n");
            continue;
        }
        int range=0;
        while(range<=1)
        {
            printf("\nChoose number range! (more than 1) : ");
            scanf("%d",&range); 
            scanf("%c",&dummy);
            if(range<=1)
            {
                printf("\nChoose more than 1!!!!\n");
            }
        }
        

        int solution=(rand()%range)+1;
        int guess;
        //printf("\n%d %d\n",solution,guess);
        while(guess!=solution)
        {
            printf("\nGuess the number (1-%d): ",range);
            scanf("%d",&guess);
            scanf("%c",&dummy);

            if(guess==solution)
            {
                printf("\nYou win the solution is %d\n",solution);
                break;
            }
            else
            {
                printf("\nWrong! try again\n");
                continue;
            }
        }
    }
}