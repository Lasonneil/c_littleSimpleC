#include<stdio.h>
#include<stdlib.h>
typedef struct jd
{
	double x;
	double y;
} point   ;         //定义一个“点 ”的结构体 数据类型 
int jisuan(int n ,double *,point *);
int main()
{
	int n,i; 
	printf("请输入插值节点的个数； ");
	scanf("%d",&n);
	printf("\n");                //输入插值节点的个数 
	
	printf("请输入所有的插值节点：\n");

	point *jp;
	jp=(point *)malloc(n*sizeof(point));
	for( i=0;i<n;i++)
	{
		printf("第%d个  ",i+1);
		scanf("%lf %lf",&jp[i].x,&jp[i].y);
		printf("\n");
	}                        //存储所有输入的插值节点 
	
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
		printf("%lf ",cs[i]);  //这一句是检验差商计算是否正确 
	}                        //计算差商 
	
	jisuan(n,cs,jp);
	while(1)
	{
		printf("是否继续计算？\n 是：1  否：0\n");
 	    int s;
       	scanf("%d",&s);
 	    if(s==1)
 	    jisuan(n,cs,jp);
 	    else
 	    break;    
	}
    
	free(jp);        //释放动态内存 
	free(cs);
	return(0); 	
 } 
 
 int jisuan(int n,double *cs,point* jp)
 {
 	int i; 
    printf("请输入想要近似的点：");
	double jsd,temp=1,newton=cs[0];
	scanf("%lf",&jsd); 
	for(i=0;i<n;i++)
	{
		temp=temp*(jsd-jp[i].x);
		newton=newton+temp*cs[i+1];
		
	}                   //  计算牛顿插值 
	printf("newton(%lf)=%lf\n",jsd,newton);   //输出 
 	
  } 
 

 
 
 
