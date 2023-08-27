#include<stdio.h>
#include<stdlib.h>
int main()  {

int n, m;
char ch;
printf("enter initial amount");
scanf("%d", &n);

printf(" enter d for debit\n c for credit\n b for balance");
scanf(" %c", &ch);

switch(ch)
{
  case 'd' : printf(" enter amount for debit");
              scanf("%d", &m);
              n = n + m;
              printf (" new balance is : %d", n);
              break;

  case 'c' : printf(" enter amount for credit");
              scanf("%d", &m);
              n = n-m;
              printf (" new balance is : %d", n);
              break;

  case 'b' : printf(" your bank balance is : %d", n);
            break ;

      default : printf( " choose correct option");

}

}




