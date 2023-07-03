#include <stdio.h>
	

void main ()
{
int a,b,c;
	do{
			
		printf("Press 1 for +\n");
     	printf("Press 2 for -\n");	
	    printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		printf("Press 0 for exit\n");
		printf("Enter your choice:");
		scanf("%d",&c);
		
		switch(c)
		{
			
			case 1 : printf("Enter first number :");
			         scanf("%d",&a);
			         printf("Enter first number :");
			         scanf("%d",&b);
			         printf("Addition of %d and %d is %d\n",a,b,a+b);
			         break;
			         
	    	case 2 : printf("Enter first number :");
			         scanf("%d",&a);
			         printf("Enter first number :");
			         scanf("%d",&b);
			         printf("Subtraction of %d and %d is %d\n",a,b,a-b);
			         break;
			case 3 : printf("Enter first number :");
			         scanf("%d",&a);
			         printf("Enter first number :");
			         scanf("%d",&b);
			         printf("Multiplication of %d and %d is %d\n",a,b,a*b);
					 break;	
			case 4 : printf("Enter first number :");
			         scanf("%d",&a);
			         printf("Enter first number :");
			         scanf("%d",&b);
			         printf("Division of %d and %d is %d\n",a,b,a/b);	
			         break;
		 	case 5 : printf("Enter first number :");
			         scanf("%d",&a);
			         printf("Enter first number :");
			         scanf("%d",&b);
			         printf("Modulus of %d and %d is %d\n",a,b,a%b);
			         break;
			case 0 : 
			break;
			
			         
			default :
			 printf("wrong input !!");	        
			 break;  
		}
	}while(c!=0);

}




