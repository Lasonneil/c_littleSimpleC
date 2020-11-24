#include<stdio.h>
#include<stdlib.h>
 
 
 int main()
 {
 	char ch,pic_name[20],file_name[20],finish_name[20];
 	
 	FILE *f_pic,*f_file,*f_finish;
 	printf("请输入需要合成的图片和文件的名称：\n");
 	printf("图片： ");
 	scanf("%s",pic_name);
 	printf("\n文件: ");
 	scanf("%s",file_name);
 	printf("\n生成为： ");
 	scanf("%s",finish_name);
 	
 	
 	if(!(f_pic=fopen(pic_name,"rb")))
 	{
 		printf("不能打开图片%s",pic_name);
	 }
	 
	 if(!(f_file=fopen(file_name,"rb")))
 	{
 		printf("不能打开文件%s",file_name);
	 }
	 
	 if(!(f_finish=fopen(finish_name,"wb")))
 	{
 		printf("不能打开图片%s",finish_name);
	 }
	 
	 while(!(feof(f_pic)))
	 {
	 	ch=fgetc(f_pic);
	 	fputc(ch,f_finish);
	 }
	 fclose(f_pic);
	   
	 while(!(feof(f_file)))
	 {
	 	ch=fgetc(f_file);
	 	fputc(ch,f_finish);
	 }
	 fclose(f_file);
	 fclose(f_finish);
 	system("pause");
 }
