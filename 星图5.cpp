#include<stdio.h>
main()
{
	int i,j,n;
	printf("������һ������");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	while(1);
	
 } 
