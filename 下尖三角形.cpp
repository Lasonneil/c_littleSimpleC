#include<stdio.h>
main()
{
	int i,j,n;
	printf("请输入一个数：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*(n-i)+1;j++)
		{
			printf("*");
		}
		printf("\n");
	 } 
 } 
