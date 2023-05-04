#include<stdio.h>
#include<conio.h>
	main()
	{       float a,b,c;
		clrscr();
		printf("Enter value of angle a:");
		scanf("%f",&a);
		printf("Enter the value of angle b:");
		scanf("%f",&b);
		c=180-(a+b);
		printf("Answer:%.f",c);

		getch();
	}
