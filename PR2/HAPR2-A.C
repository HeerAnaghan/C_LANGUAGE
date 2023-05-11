#include<stdio.h>
#include<conio.h>
main()
{           int units,bill;
	    clrscr();
	    printf("Enter number of units:");
	    scanf("%d",&units);

	    if(units>=0 && units<=50)
	    {
	      bill=units*0.5;
	      printf("Total amount:%d",bill+(20*bill/100));
	    }
	    else if(units>50 && units<=150)
	     {
	      bill=25+(units*0.5);
	      printf("Total amount:%d",bill+(20*bill/100));
	    }
	    else if(units>150 && units<=250)
	     {
	      bill=100+(units*0.5);
	      printf("Total amount:%d",bill+(20*bill/100));
	    }
	    else if(units>250)
	     {
	      bill=220+(units*0.5);
	      printf("Total amount:%d",bill+(20*bill/100));
	    }
	    else
	    {
	     printf("Invalid Input !!");
	    }

		getch();
}








