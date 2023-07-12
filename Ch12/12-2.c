#include<stdio.h>

struct employees{
	int id ;
	char name[20];
	int age;
	char role[20];
	char city[10];
	char experience;
	char company[30];
}

  main(){
	int i,n;
	
	printf("Enter total employees:\t");
	scanf("%d",&n);
	struct employees s[n];
	
	for(i=0;i<n;i++){
		 printf("Employee: (%d/%d)\n",i+1,n);
		printf("Enter Id :  ");
		scanf("%d",&s[i].id);
		printf("Enter Name : ");
		scanf("%s",&s[i].name);
		printf("Enter Age : ");
		scanf("%d",&s[i].age);
		printf("Enter role : ");
		scanf("%s",&s[i].role);
		printf("Enter City : ");
		scanf("%s",&s[i].city);
		printf("Enter Experience : ");
		scanf("%d",&s[i].experience);
		printf("Enter Company Name: ");
		scanf("%s",&s[i].company);
	}
	
	printf("Id\tName\tAge\trole\tCity\tExperience\tCompany name\n\n");
	for(i=0;i<n;i++){
		
		printf("%d\t%s\t%d\t%s\t%s\t\t%d\t\t%s\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].experience,s[i].company);
	}	
}