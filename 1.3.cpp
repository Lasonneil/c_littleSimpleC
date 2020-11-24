#include<stdio.h>
main()
{
	float a,b;
	float max(float x,float y);
	scanf("%f %f",&a,&b);
	printf("The larger one is %f\n",max(a,b));
	return 0;
}
float max(float x,float y)
{
	float c;
	if(x>y)
	c=x;
	else c=y;
	return(c);
}
