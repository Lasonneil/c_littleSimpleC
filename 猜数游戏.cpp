#include<stdio.h>
main()
{
	int i,j,k,s,a,b;
	printf("请输入一个数字：");
	scanf("%d",&i);
	j=((i*i+i+i+1+2*3)*i+i+i+i)/2;
	printf("您的幸运数字已生成，请开始瞎猜：\n");     //至此生成一个幸运数 
	
	k=j/2 +1 ;                                        //此行确定你要猜的次数 
	if(k>20)
	k=20;
	for(s=0;s<k;s++)
	{
		scanf("%d",&a);
		if (a>j)
		{
		printf("大了，傻吊！");
		continue ;
	    }
		else if(a<j)
		{
		printf("小了，傻吊！");
		continue ;
	    }
		else if(a=j)
		{
		printf("猜对了，你真是一个天才！"); 
		break;
	   }
		
	}
	if(a!=j)
	printf("\n你输了……你们两个都是笨蛋！\n");
	else 
	printf("你赢了，小天才!\n另外一个人就是个蠢驴！！ "); 
	printf("\n\n\n(输入任意一个数字退出)"); 
	scanf("%d",&b);
	return 0;
	while(1);
	
	
 } 
