#include<stdio.h>
main() 
{
	int i,j,k,a[100];
	for(i=0;i<100;i++)
		a[i]=i+1;
	for(i=0;i<100;i++)
	for(j=2;j<=i/2;j++)	
	{
		 if(a[i]%j!=0)
	     printf("%3d",a[i]); 
	     break;
    } 
}
