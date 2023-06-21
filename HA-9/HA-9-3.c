#include <stdio.h>
main(){
	
     char str1[20];
     
     printf("Enter any string: ");
     scanf("%[^\n]",str1);
     
     int i;
     for (i=0;i<20;i++){
     	
     	if(i=0){
		  printf("")
		 }
     		
		 
     	else if(str1[i]>=97 && str1[i]<=122){
     		str1[i]-=32;
     	}
		 
     		
     		
		 
	 }
	 printf("Toggle case : %s",str1);
}