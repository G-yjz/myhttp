#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("Content-type: text/html;charset=utf-8\r\n\r\n");
	//printf("hello");
	//printf("Content-Type: text/html\n\n");
    char username[64];
    char password[64];
    sscanf(getenv("QUERY_STRING"), "src=%[^&]&source=%s",username,password);
    printf("用户名：%s</br>密码：%s",username,password);
	
	return 0;
}