#include<stdio.h>
main()
{   
    int n;

    printf("Enter n:");
	scanf("%d",&n);
	int a[n],i;
	int count =0;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		count++;
    }
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\n",i,a[i]);
    }

    printf("length of Array: %d",count);

}
      