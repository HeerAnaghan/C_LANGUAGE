#include<stdio.h>
main()
{
	FILE *fp;
	int i;
	
	fp = fopen("?C:\\Users\\123\\Desktop\\heer.txt","w");

	for(i=1;i<=50;i++)
	{
		if(i%3==0 && i%5==0)
		{
			fprintf(fp,"%d",i);
		}
	}
		fclose(fp);
}