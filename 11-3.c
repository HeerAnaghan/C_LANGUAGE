#include<stdio.h>

int getInt();

 void main(){
	
	int i,n;
	int *p1;
	int **p2;
	int ***p3;
	
	printf("Enter the array size:");	
	n=getInt();
	int a[n];
	int *p[n];
	
	printf("Enter array elements\n");
	
	for(i=0;i<n;i++){
		
		p[i]=&a[i];
	}
	
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",p[i]);	
	}
	
	for(i=0;i<n;i++){
		printf("a[%d]: %d \t\n",i,*p[n-i-1]);
	}
	
	
	

	
	
	
	
}

int getInt(){
	
	int x;
	scanf("%d",&x);
	return x;
}