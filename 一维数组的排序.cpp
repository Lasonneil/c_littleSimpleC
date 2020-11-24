#include<stdio.h>
main()
{
	int i,j,n;
	int a[10];
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	printf("%3d",a[i]);
	}
	for(i=0;i<9;i++)
	 for(j=0;j<9-i;j++)
	 if(a[i]>a[j])
	 { 
	    n=a[i];
	    a[i]=a[j];
	    a[j]=n;
	}
	printf("\n");
	for(i=0;i<10;i++)
	printf("%7d",a[i]);
}
