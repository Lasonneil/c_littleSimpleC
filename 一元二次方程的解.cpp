#include<stdio.h>
#include<math.h>
main(void)
{
	 int a,b,c,x;//������ϵ�������ڼ������
	float delta,x1,x2;//�����b*b-4ac
	delta=b*b-4*a*c;
	if(delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("��һԪ���η�����������\n x1=%d		x2=%d\n",x1,x2);
	}
	else if(delta==0)
	{
		x1=(-b)/(2*a);
		x2=x1;
		printf("�÷���ֻ��һ����\n x1=x2=%d",x1);
	}
	else
	{
		printf("�÷����޽�\n");
	}
	while(1); 
	return 0;
}
