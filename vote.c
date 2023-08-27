#include <stdio.h>
#include <stdlib.h>
#include<unistd.h> 

int vote1, vote2, vote3, vote4;

void result();

int main()
{

    vote1 = vote2 = vote3 = vote4 = 0;
    int vote;
    char a;
    do
    {
        system("cls");

        printf("\t\t\t\tWELCOME\n");
        printf("\t\t---------------------------------------------\n");
        printf("\t\tvoting commision of INDIA\n");
        printf("\t\tElection of 2022\n");
        printf("\n");
        printf("\t\t---------------------------------------------\n");
        printf("\t\t\t1. BJP\t\t2. Congress\n");
        printf("\n");
        printf("\t\t\t3. AAP\t\t4. NOTA\n");
        printf("\n");
        printf("\t\tEnter your vote( 1/2/3/4)   :    ");
        scanf("%d", &vote);

        if (vote == 1)
        {
            printf("\t\tyou votted BJP");
            vote1++;
            sleep(2);
            system("cls");
        }
        else if (vote == 2)
        {
            printf("\t\tyou votted congress");
            vote2++;
            sleep(2);
            system("cls");
        }
        else if (vote == 3)
        {
            printf("\t\tyou votted AAP");
            vote3++;
            sleep(2);
            system("cls");
        }
        else if (vote == 4)
        {
            printf("\t\tYou go with NOTA");
            vote4++;
            sleep(2);
            system("cls");
        }
    reapeat:
        printf("\t Enter n for next and e for exit    :   ");
        fflush(stdin);
        scanf(" %c", &a);

    } while (a == 'n');
    if (a == 'e')
    {
        goto result;
    }

    else if (a != 'n' || a != 'e')
    {
        printf("enter valid charector\n");
        goto reapeat;
    }

result:
    result();

    return 0;
}

void result()

{
    system("cls");
    printf("\t\t...............REsULT..............\n");
    printf("_______________________________________________\n");

    printf("| \t\tBJP got %d vote                         |\n ", vote1);
    printf("|\t\tcongress got %d vote                     |\n", vote2);
    printf("| \t\tAAP got %d vote                         |\n", vote3);
    printf("| \t\t %d go with NOTA                        |\n", vote4);
    printf("\n");
    printf("_______________________________________________\n");
    int result[3] = {vote1, vote2, vote3};
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        if (result[i] > max)
        {
            max = result[i];
        }
    }

    if (max == result[0])
    {
        printf("\t\t BJP win this election !!!");
    }
    else if (max == result[1])
    {
        printf("\t\t Comgress win this election !!!");
    }
    else if (max == result[2])
    {
        printf("\t\t AAP win this election !!!");
    }
}