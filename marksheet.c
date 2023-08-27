#include<stdio.h>
#include<stdlib.h>

char n[9], f[9], m[9], s[9];
   int c, y;
   int pm,cm, mm, em, cpm;
   int d1, m1, ye;
void uif();
void gen();


int main() { 
char c;

    printf("\n\t\t\t\t________________________________________\n");
    printf("\t\t\tWELCOME to c programme  ");
    printf("\t\t\tDoyouwant to genret marksheet?(y/n)     :   ");
    scanf("%c", &c);

    if( c == 'y'|| c == 'Y'){
        uif();
    }
    else{ exit(0);}



}

void uif()
{  
    char ok; 
    printf("\n\t\t\t....Enter your information....\n");

    printf("\t\t\tenter your name           :    ");
    scanf("%s", &n);

    printf("\t\t\tenter your fathers name   :    ");
    scanf("%s", &f);

    printf("\t\t\tenter your mothers name   :    ");
    scanf("%s", &m);

    printf("\t\t\tenter your class          :    ");
    scanf("%d", &c);

    printf("\t\t\tenter your school name    :    ");
    scanf("%s", &s);

    printf("\t\t\tenter year                :    ");
    scanf("%d", &y);

     printf("\t\t\tenter DOB                 :    ");
     scanf("%d:%d:%d", &d1, &m1 ,&ye);

    printf("\n\t\t\t__________enter marks____________");

    r1:
    printf("\n\t\t\tphysics marks              :    ");
    fflush(stdin);
    scanf("%d", &pm);
    if( pm<0 || pm >100) { printf("enter valid marks\n");
    goto r1;  }

        r2:
    printf("\t\t\tchemistry marks            :    ");
    fflush(stdin);
    scanf("%d", &cm);
    if( cm<0 || cm >100) { printf("enter valid marks\n");
    goto r2;  }

        r3:
    printf("\t\t\tmaths     marks            :    ");
    fflush(stdin);
    scanf("%d", &mm);
    if( mm<0 || mm >100) { printf("enter valid marks\n");
    goto r3;  }

        r4:
    printf("\t\t\tenglish  marks             :    ");
    fflush(stdin);
    scanf("%d", &em);
    if( em<0 || em >100) { printf("enter valid marks\n");
    goto r4;  }

        r5:
    printf("\t\t\tcomputer  marks            :    ");
    fflush(stdin);
    scanf("%d", &cpm);
    if(  cpm<0 || cpm >100) { printf("enter valid marks\n");
    goto r5;  }

        printf("\n\t\t\t please wait.......\n");
        sleep(5);  // added later
        system("cls");

        gen();
    

}



void gen()
{  
       int total;
       float per;

       total = pm+cm+mm+cpm+em;
       per = total/5;
    system("cls");
    fflush(stdin);
    printf("________________________________________________________________________________________________________________\n");
    printf("|\t\t\t\t .....Gujarat board.....\n");   
    printf("|______________________________________________________________________________________________________________|\n");
    printf("| name : %s\tclass : %d\tDOB :%d:%d:%d\n", n,c,d1,m1,ye);
    printf("| fathers name : %s\n |mothers name : %s\n", f,m);
    printf("|DOB  : %d:%d:%d\n", d1,m1,ye);
    printf("|school name : %s\n", s);
    printf("|______________________________________________________________________________________________________________|\n");
    printf("|\tsubject    \tmarks   \t marks require  \tmarks obtained   \n");
    printf("|\tPhysics    \t100     \t 33             \t%d\n", pm);
    printf("|\tchemistry  \t100     \t 33             \t%d\n", cm);
    printf("|\tmaths      \t100     \t 33             \t%d\n", mm);
    printf("|\tEnglish    \t100     \t 33             \t%d\n",em);
    printf("|\tComputer   \t100     \t 33             \t%d\n",cpm);
    printf("|______________________________________________________________________________________________________________|\n");
    printf("|\t           \t500     \tTotal           \t%d\n", total);
     printf("|____________________________________________________________________________________________________________\n");

    if( per<=99 || per>=90)
    { 
        printf("|\t result : PASS with A+\n");
        printf("|percentage : %f\n", per);
    }
       else if( per<=89 || per>=80)
    { 
        printf("|\t result : PASS with A\n");
        printf("|percentage : %f\n", per);
    }

       else if( per<=79 || per>=70)
    { 
        printf("|\t result : PASS with B+\n");
        printf("|percentage : %f\n", per);
    }
           else if( per<=69 || per>=50)
    { 
        printf("|\t result : PASS with B\n");
        printf("|percentage : %f\n", per);
    }
       else if( per<=49 || per>=33)
    { 
        printf("|\t result : PASS with C\n");
        printf("|percentage : %f\n", per);
    }
       else if( per<=33)
    { 
        printf("|\t result : FAIL\n");
        printf("|percentage : %f\n", per);
    }
    printf("|____________________________________________________________________________________________________________\n");
}