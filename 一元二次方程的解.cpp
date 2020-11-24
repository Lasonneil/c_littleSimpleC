#include<stdio.h>
#include<math.h>
main(void)
{
	 int a,b,c,x;//把三个系数保存在计算机中
	float delta,x1,x2;//这个是b*b-4ac
	delta=b*b-4*a*c;
	if(delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("该一元二次方程有两个解\n x1=%d		x2=%d\n",x1,x2);
	}
	else if(delta==0)
	{
		x1=(-b)/(2*a);
		x2=x1;
		printf("该方程只有一个解\n x1=x2=%d",x1);
	}
	else
	{
		printf("该方程无解\n");
	}
	while(1); 
	return 0;
}
