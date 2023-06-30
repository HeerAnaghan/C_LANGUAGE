#include<stdio.h>

int getint (){
	int n;
	printf("enter the lenfgth of array :");
	scanf("%d",&n);
	return n;
}

int arrayinput(int a[],int n){
	
	int i;
	for (i=0;i<n;i++){
		
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		
	}
}

int arraysum (int a[],int n){
	
	int sum=0,i;
	for(i=0;i<n;i++){
		
		sum+=a[i];
	}
	
	return sum;
	
}

void main(){
	
	int n,sum;
	n=getint();
	int a[n];
	 arrayinput(a,n);
	 sum = arraysum(a,n);
	 
	 printf("Sum : %d",sum);
	
	
	
	
}
