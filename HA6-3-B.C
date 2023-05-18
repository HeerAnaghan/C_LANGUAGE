#include<stdio.h>
#include<conio.h>
	main()
	{       int i,n,fact=1;
		clrscr();
		printf("Enter ending point:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		  fact=fact*i;
		}
		  printf("sum of 1 to %d:%d",n,fact);
		getch();
	}
