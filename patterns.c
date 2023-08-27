#include <stdio.h>
#include<math.h>

int main(void) {
	
	int n=5, t= n*n, k=3, l=3;
	for( int i =0; i<t; i++)
	{
		k =3;
		if( i ==l)
		{
			for( int j =0; j< t; j++)
			{
				printf("* ");
			}
			printf("\n");
			l = l+3;
		}
		else{ 

			for( int m =0; m< t; m++)
			{
				if( i ==0 || m == t-1 || m ==0 || i == t-1 )
				{
					printf("* ");
				}
				else if( m==k)
				{
					printf("* ");
					k = k +3;
				}
				else if( i ==m || i == m-1 || m == i-1)
				{
					printf("@ ");
				}
				else{
					printf("  ");
				}

			}
			printf("\n");
		}
	}
	return 0;
}

