#include<stdio.h>
int s(int x,int y) 
{
	int s;
	if(x<y)
	s=x;
	else
	s=y;
	return(s);
}
main()
{
    int a,b,c;
    printf("������������:");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",s(a,s(b,c)));
}


	
