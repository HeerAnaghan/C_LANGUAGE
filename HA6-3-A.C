#include<stdio.h>
#include<conio.h>
	main()
	{       int i,n,sum=0;
		clrscr();
		printf("Enter ending point:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		  sum=sum+i;
		}
		  printf("sum of 1 to %d:%d",n,sum);
		getch();
	}
