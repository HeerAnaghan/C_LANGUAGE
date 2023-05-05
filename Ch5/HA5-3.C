#include<stdio.h>
#include<conio.h>
    void	main()
	{      int n;
		clrscr();
	printf("Enter your marks:");
	scanf("%d",&n);

	if (n>=90 && n<=100)
	{
	printf("A1");
	}
	else if (n>=80 && n<=89)
	{
	printf("A2");
	}
	else if(n>=70 && n<=79)
	{
	printf("B1");
	}
	else if(n>=60 && n<=69)
	{
	printf("B2");
	}
	else if (n>=50 && n<=59)
	{
	printf("C1");
	}
	else if(n>=40 && n<=49)
	{
	 printf("C2");

	}
	else if (n>32 && n<=39)
	{
	printf("D");
	}
	else if (n<=30 && n>=0)
	{
	printf ("fail!!");
	}
	else
	{
	printf("Invalid marks");
	}
	getch();
	}













