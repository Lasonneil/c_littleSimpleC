#include<stdio.h>
main()
{
	int i,j,k,s,a,b;
	printf("������һ�����֣�");
	scanf("%d",&i);
	j=((i*i+i+i+1+2*3)*i+i+i+i)/2;
	printf("�����������������ɣ��뿪ʼϹ�£�\n");     //��������һ�������� 
	
	k=j/2 +1 ;                                        //����ȷ����Ҫ�µĴ��� 
	if(k>20)
	k=20;
	for(s=0;s<k;s++)
	{
		scanf("%d",&a);
		if (a>j)
		{
		printf("���ˣ�ɵ����");
		continue ;
	    }
		else if(a<j)
		{
		printf("С�ˣ�ɵ����");
		continue ;
	    }
		else if(a=j)
		{
		printf("�¶��ˣ�������һ����ţ�"); 
		break;
	   }
		
	}
	if(a!=j)
	printf("\n�����ˡ��������������Ǳ�����\n");
	else 
	printf("��Ӯ�ˣ�С���!\n����һ���˾��Ǹ���¿���� "); 
	printf("\n\n\n(��������һ�������˳�)"); 
	scanf("%d",&b);
	return 0;
	while(1);
	
	
 } 
