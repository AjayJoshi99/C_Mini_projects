#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void Addstudent();
void Take_attendants();
void check_attendants();
void student_rollno();
char name[6][5];
int i, d;
char p[5];
char a = '\0';
int main()
{
  int number;

  do
  {
  reapet:
    system("cls");
    printf("\t\t\t..........WELCOME..........\n");
    printf("\n");
    printf("\t\tThis program is for five students attendants \n");
    printf("\t\t___________________________________________\n");
    printf("\t\tEnter 1 for Add student   \n");
    printf("\t\tEnter 2 for take student  attendants   \n");
    printf("\t\tEnter 3 for check attendants   \n");
    printf("\t\tEnter 4 for show students rollno.    \n");
    printf("\t\tEnter 5 for exit  \n");
    fflush(stdin);
    scanf("%d", &number);
    if (number == 5)
    {
      exit(0);
    }

    switch (number)
    {
    case 1:
      Addstudent();
      break;

    case 2:
      Take_attendants();
      break;

    case 3:
      check_attendants();
      break;

    case 4 :
       student_rollno();
        break;

      default : 
      printf("ENTER valid number\n");
      sleep(2);
      break;
    }
  } while (number != 5);
}

void Addstudent()
{
  FILE *fp;
  fp = fopen("attebdandants.txt", "w");

  for (i = 0; i < 5; i++)
  {
    printf("\t%d student  name  :   ", i + 1);
    fflush(stdin);
    scanf(" %s", name[i]);
  }

  for (i = 0; i < 5; i++)
  {
    fprintf(fp, "Roll no. : %d\t", i + 1);
    fflush(stdin);
    fprintf(fp, "%s\n", name[i]);
  }
  fclose(fp);
}

void Take_attendants()
{
  FILE *fp;
  fp = fopen("attendants.txt", "a");

  for( i = 0; i < 5; i++ )
  {

    printf(" Roll no. %d :  ", i + 1);
    scanf(" %c\n", &p[i]);

  }

  for( i=0; i<5; i++)
  { 
        fprintf( fp, " Roll no. %d :  ", i + 1);
        fprintf(fp, " %c\n", p[i]);

  }
  fprintf(fp, "%c\n",a);
  fclose(fp);
}
void check_attendants()
{
  FILE *fp;
  fp = fopen("attendants.txt", "r");

char atten[128];
while( fgets(atten, sizeof(atten), fp) != NULL)
{ 
  fputs(atten, stdout);
} 
sleep(5);
  fclose(fp);

}

void student_rollno()
{
  FILE*fp;
  fp = fopen("attebdandants.txt", "r");

  printf("\t\t.........STUDENTS...........\n");
  
  char chunk[128];
  while( fgets(chunk, sizeof(chunk), fp) != NULL)
  { 
    fputs(chunk, stdout);
  }
    sleep(5);
  fclose(fp);

}
