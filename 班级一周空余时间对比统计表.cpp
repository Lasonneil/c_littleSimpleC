#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

		int vol(float x )
	{
		int t;
	    t=(int)(x*10)%10;
	   return(t);
	}                              //�Զ��庯���������жϿ���ʱ������һ�ڿΣ� 
	
	int row(float y)
	{
		int t;
		t=(int)(y*10)/10;
		return(t); 
	}                              //�Զ��庯���������жϿ���ʱ������һ�� �� 

int main()
{
	int a,time[7][5]={0};
	printf("������ͳ�������� ");
	scanf("%d",&a);
	printf("\n") ;    //����ͳ������ a�� 

	typedef struct student
	{
		char name[60];
		float t[20];
		int kx;
	} xuesheng;
	xuesheng *ren=(xuesheng *)malloc(sizeof(xuesheng)*a);       
	xuesheng *q;
	q=ren;                         //����ѧ���ṹ��������� struct student ���顾a���� 

	int kx;
	for(int k=0;k<a;k++)
	{
		printf("�������%d��ѧ������Ϣ:\n",k+1);
		printf("������ ");
		scanf("%s",q[k].name);
		printf("�ж��ٸ�����ʱ��㣺");
		scanf("%d",&q[k].kx);    
		printf("����ʱ��:\n"); 
		for(int m=0;m<q[k].kx;m++)
			scanf("%f",&q[k].t[m]);	   //����ѧ����Ϣ�� ������float����t[20]���棬ͬʱѧ��������Ϣ�����ڽṹ���� �� 
	}
	 
/*	int k,tmp;
	for(k=0;k<a;k++)
	{
		printf("%s\n",q[k].name);
		for(tmp=1;tmp<=q[k].kx;tmp++)
		{
			if(tmp%4==0)
			printf("\n");
			printf("%-3.1f",q[k].t[tmp-1]);
		}
		printf("\n");
		
	}               
	*/                    //����һ�������������������������������ѧ����Ϣ 
	
    int zs; 
	for(int m=0;m<a;m++)
	{
		for(zs=0;zs<q[m].kx;zs++)
		if(q[m].t[zs]!=0)
		time[vol(q[m].t[zs])-1][row(q[m].t[zs])-1]+=1;
		
	}                                     //������ʱ��ͳ�Ƶ��������棬�洢�� 

	int day,tim;
	for(int bian=0;bian<7;bian++)
	for(int li=0;li<5;li++)
	if(time[bian][li]==a)
	{
		day=bian;
		tim=li;
		printf("����%d��%d�ڿδ�Ҷ���ʱ�䣡\n",tim+1,day+1);         //���ȫ�඼�пյ�ʱ��� 
	}
	
	free(ren);
	while(1); 
 } 
