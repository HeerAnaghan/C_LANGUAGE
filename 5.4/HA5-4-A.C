#include<stdio.h>
#include<conio.h>
main()
{           int choice;
	    clrscr();
	    printf("Enter...\n");
	    printf("Press 1 for English\n");
	    printf("Press 2 for Hindi\n");
	    printf("Press 3 for Gujarati\n\n");
	    printf("Enter your choice:");
	    scanf("%d",&choice);

	    switch(choice)
	    {
			  case 1 :
				   printf("Enter...\n");
				   printf("Press 1 for Internet Recharge\n");
				   printf("Press 2 for Top Up Recharge\n");
				   printf("Press 3 for Special Recharge\n\n");
				   printf("Enter your choice:");
				   scanf("%d",&choice);
				   clrscr;

				   switch(choice)
				   {
				       case 1 : printf("You have successfully done Internet Recharge");
						break;
				       case 2 : printf("You have successfully done Top Up Recharge");
						break;
				       case 3 : printf("You have successfully done Special Recharge");
						break;
				       default:
						printf("Invalid Input !!");

				   }
				      break;
			  case 2 :
				   printf("Enter...\n");
				   printf("Internet Recharge ke liye 1 dabaiye\n");
				   printf("Top Up Recharge ke liye 2 dabaiye\n");
				   printf("Special Recharge ke liye 3 dabaiye\n\n");
				   printf("Enter your choice:");
				   scanf("%d",&choice);

				    switch(choice)
				   {
				       case 1 : printf("Aapne safaltapurvak Internet Recharge kar liya hai");
						break;
				       case 2 : printf("Aapne safaltapurvak Top Up Recharge kar liya hai");
						break;
				       case 3 : printf("Aapne safaltapurvak Special Recharge kar liya hai");
						break;
				       default:
						printf("Invalid Input !!");

				   }
				      break;


			  case 3 :
				   printf("Enter...\n");
				   printf("Internet Recharge mate 1 dabavo\n");
				   printf("Top Up Recharge mate 2 dabavo\n");
				   printf("Special Recharge mate 3 dabavo\n\n");
				   printf("Enter your choice:");
				   scanf("%d",&choice);

				    switch(choice)
				   {
				       case 1 : printf("Tame safaltapurvak Internet Recharge karyu che");
						break;
				       case 2 : printf("Tame safaltapurvak Top Up Recharge karyu che");
						break;
				       case 3 : printf("Tame safaltapurvak Special Recharge karyu che");
						break;
				       default:
						printf("Invalid Input !!");

				   }
				      break;



			  default:
				 printf("Invalid Input !!");
	    }


		getch();
}
