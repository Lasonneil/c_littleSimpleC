#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("����һ����n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n-i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
