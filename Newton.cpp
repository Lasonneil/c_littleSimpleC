#include<stdio.h>
#include<stdlib.h>
typedef struct jd
{
	double x;
	double y;
} point   ;         //����һ������ ���Ľṹ�� �������� 
int jisuan(int n ,double *,point *);
int main()
{
	int n,i; 
	printf("�������ֵ�ڵ�ĸ����� ");
	scanf("%d",&n);
	printf("\n");                //�����ֵ�ڵ�ĸ��� 
	
	printf("���������еĲ�ֵ�ڵ㣺\n");

	point *jp;
	jp=(point *)malloc(n*sizeof(point));
	for( i=0;i<n;i++)
	{
		printf("��%d��  ",i+1);
		scanf("%lf %lf",&jp[i].x,&jp[i].y);
		printf("\n");
	}                        //�洢��������Ĳ�ֵ�ڵ� 
	
	double *cs;
	cs=(double *)malloc(n* sizeof(double));
	for(i=0;i<n;i++)
	cs[i]=jp[i].y;
	for(i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			cs[j]=(cs[j]-cs[j-1])/(jp[j].x-jp[j-1-i].x);
		}
		printf("%lf ",cs[i]);  //��һ���Ǽ�����̼����Ƿ���ȷ 
	}                        //������� 
	
	jisuan(n,cs,jp);
	while(1)
	{
		printf("�Ƿ�������㣿\n �ǣ�1  ��0\n");
 	    int s;
       	scanf("%d",&s);
 	    if(s==1)
 	    jisuan(n,cs,jp);
 	    else
 	    break;    
	}
    
	free(jp);        //�ͷŶ�̬�ڴ� 
	free(cs);
	return(0); 	
 } 
 
 int jisuan(int n,double *cs,point* jp)
 {
 	int i; 
    printf("��������Ҫ���Ƶĵ㣺");
	double jsd,temp=1,newton=cs[0];
	scanf("%lf",&jsd); 
	for(i=0;i<n;i++)
	{
		temp=temp*(jsd-jp[i].x);
		newton=newton+temp*cs[i+1];
		
	}                   //  ����ţ�ٲ�ֵ 
	printf("newton(%lf)=%lf\n",jsd,newton);   //��� 
 	
  } 
 

 
 
 
