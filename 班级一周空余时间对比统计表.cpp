#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

		int vol(float x )
	{
		int t;
	    t=(int)(x*10)%10;
	   return(t);
	}                              //自定义函数，用来判断空余时间在哪一节课； 
	
	int row(float y)
	{
		int t;
		t=(int)(y*10)/10;
		return(t); 
	}                              //自定义函数，用来判断空余时间在哪一天 ； 

int main()
{
	int a,time[7][5]={0};
	printf("请输入统计人数： ");
	scanf("%d",&a);
	printf("\n") ;    //输入统计人数 a； 

	typedef struct student
	{
		char name[60];
		float t[20];
		int kx;
	} xuesheng;
	xuesheng *ren=(xuesheng *)malloc(sizeof(xuesheng)*a);       
	xuesheng *q;
	q=ren;                         //定义学生结构体变量类型 struct student 数组【a】； 

	int kx;
	for(int k=0;k<a;k++)
	{
		printf("请输入第%d个学生的信息:\n",k+1);
		printf("姓名： ");
		scanf("%s",q[k].name);
		printf("有多少个空闲时间点：");
		scanf("%d",&q[k].kx);    
		printf("空余时间:\n"); 
		for(int m=0;m<q[k].kx;m++)
			scanf("%f",&q[k].t[m]);	   //输入学生信息并 储存在float数组t[20]里面，同时学生姓名信息储存在结构体中 ； 
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
	*/                    //这是一个输出函数，用来输出保存在数组里的学生信息 
	
    int zs; 
	for(int m=0;m<a;m++)
	{
		for(zs=0;zs<q[m].kx;zs++)
		if(q[m].t[zs]!=0)
		time[vol(q[m].t[zs])-1][row(q[m].t[zs])-1]+=1;
		
	}                                     //将空余时间统计到数组里面，存储； 

	int day,tim;
	for(int bian=0;bian<7;bian++)
	for(int li=0;li<5;li++)
	if(time[bian][li]==a)
	{
		day=bian;
		tim=li;
		printf("星期%d第%d节课大家都有时间！\n",tim+1,day+1);         //输出全班都有空的时间段 
	}
	
	free(ren);
	while(1); 
 } 
