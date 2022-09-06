#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	printf("Content-type: text/html;charset=utf-8\r\n\r\n");
    char data[64];
    char text[64];
    //gets(data);
    read(0,data,64);//post方法从标准输入中获取数据
    sscanf(data,"src=%s",text);
    printf("你输入的文本：%s",text);
	
	return 0;
}