#include<stdio.h>
main()
{
	int i,j,k;
	printf("��ӡ99�˷���\n");
	for(i=1;i<=9;i++)
   {  
	
	for(j=1;j<=i;j++)
	 {
		k=j*i;
		printf("%d*%d=%-3d",j,i,k);
 	 }
     printf("\n");
   } 
   while(1);
} 
