#include<stdio.h>
main()
{
	long int i,j,k;
	char a;
	printf("请输入你想要计算的式子：\n");
	scanf("%d%c%d=",&i,&a,&j);
	switch(a)
	{
		case '+': printf("%ld",i+j);break;
		case '-': printf("%ld",i-j); break;
		case '*': printf("%ld",i*j); break;
		case '/': printf("%ld",i/j); break;
		default: printf("您的输入有误！\n");
	
	}
while (1);
return 0;

}
