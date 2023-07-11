#include<stdio.h>
#include<string.h>

void main(){
	
	char str[20];
	int *ptr;
	int len=0;
	
	printf("Enter any string:");
	scanf("%c",&str);
    
    len=strlen(str);
    ptr=&len;
    
    printf("Length of string: %d",*ptr);
}
