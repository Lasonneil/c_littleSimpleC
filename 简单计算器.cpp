#include<stdio.h>
main()
{
	long int i,j,k;
	char a;
	printf("����������Ҫ�����ʽ�ӣ�\n");
	scanf("%d%c%d=",&i,&a,&j);
	switch(a)
	{
		case '+': printf("%ld",i+j);break;
		case '-': printf("%ld",i-j); break;
		case '*': printf("%ld",i*j); break;
		case '/': printf("%ld",i/j); break;
		default: printf("������������\n");
	
	}
while (1);
return 0;

}
