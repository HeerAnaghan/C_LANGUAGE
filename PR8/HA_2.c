#include<stdio.h>

int getinput(){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	return n;
}

void arrayinput(){
	int n,i,j;
	int *p[n];a[n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			p[i][j]=&a[i][j];
		}
	}
}

void arrayelements(){
	int n,i,j;
	
	printf("Enter a[%d][%d]: ",i,j);
	scanf("%d",p[i][j]);
}

 void main(){
 	
 	int n;
 	n=getinput;
 	int a[n];
 	arrayinput();
 	arayelements();
 	
 	for(i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			
 			printf("Cubes : %d",*p[i][j]**p[i][j]**p[i][j]);
		 }
	 }
 }











