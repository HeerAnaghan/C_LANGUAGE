#include<stdio.h>

void main(){
	
	FILE *fp1;
	int a;
	
    fp1=fopen("C:\\Users\\123\\Desktop\\HA13-1.txt","r");
    
    fscanf(fp1,"%d",&a);
    
    
    
    FILE *fp2;
    
    fp2=fopen("C:\\Users\\123\\Desktop\\HA13-A.txt","w");
    
    fprintf(fp2,"%d",a);
    fclose(fp2);
    
    
}