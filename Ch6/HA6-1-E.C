#include<stdio.h>
#include<conio.h>
 void main()
{
		int n;
		clrscr();

		printf("Enter starting point:");
		scanf("%d",&n);


		while (n>=1)
		{
		    if(n%2==1)
		    {
		    printf(" %d\n",n);
		    }
		    n--;
		}

		getch();
}
