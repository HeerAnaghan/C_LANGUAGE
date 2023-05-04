#include<stdio.h>
#include<conio.h>
	main()
	{       int a,b,c,d,e;
		b=10;
		c=5;
		d=8;
		clrscr();
		printf("Enter base salary:");
		scanf("%d",&a);
		e=a+(a*b/100)+(a*c/100)+(a*d/100);
		printf("Answer:%d",e);

		getch();
	}
