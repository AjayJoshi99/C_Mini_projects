#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int p1 = 0;
int com = 0;
char name[10];
int i, n, num;

int result();
int t();

int main()
{

    srand(time(NULL));
    n = rand()%3;
    printf(" Enter your name      :    ");
    fflush(stdin);
    scanf("%s\n", &name);
    i == 0;
    while (i < 3)
    {
        printf("enter number 0 for Rock\n enter 1 for siessor\n enter 2 for paper   :     ");
        fflush(stdin);
        scanf("%d", &num);

        if (num == 0)
        {
            printf("you : rock\n");
        }
        else if (num == 1)
        {
            printf("you : siessor\n");
        }
        else if (num == 2)
        {
            printf("you : paper\n");
        }
        else
        {
            printf("Enter valid number\n");
        }
    printf("%d . ", n);
        fflush(stdin);
        if (n == 0)
        {
            printf(" computer  :  Rock\n");
        }
        else if (n == 1)
        {
            printf("computer   : siessor\n");
        }

        else if (n == 2)

        {
            printf("computer   : paper\n");
        }

        result();
        printf("\n");
        sleep(2); 
        i++;
    }
    printf("\n");
    t();
}

int result()

{

    if (n == num)
    {
        printf(" .......Draw.....\n");
    }                                               // n=computer, num=user;
    else if (n == 0 && num == 1)                    // 0=rock, 1=siessor, 2=paper;
    {
        printf(" computer won this round \n");
        com++;
    }
    else if (n == 1 && num == 0)
    {
        printf(" you win this round\n");
        p1++;
    }
    else if (n == 2 && num == 1)
    {
        printf(" you win this round\n");
        p1++;
    }
    else if (n == 0 && num == 2)
    {
        printf(" you win this round\n");
        p1++;
    }
    else if (n == 1 && num == 2)
    {
        printf(" computer win this round\n");
        com++;
    }
    else if (n == 2 && num == 0)
    {
        printf(" computer win this round\n");
        com++;
    }
}

int t()
{
    printf("your score is       : %d\n", p1);
    printf("computer's score is : %d\n", com);

    if (p1 > com)
    {
        printf(" WINNER IS : %s\n", name);
        printf(" CONGRATULATIONS !!!\n");
    }
    else if( p1==com) 
    { 
        printf("Match is draw !!!");
    }
    else
    {
        printf(" computer win the match\n");
        printf(" better luck next time");
    }
}
