#include<stdio.h>
char* strchr_r(char *buf, char c){
	if(*buf==NULL)return NULL;
	if(*buf==c)return buf;

	return strchr_r(buf+1, c);
}

int main(){
	char str[]="Hello, World!";
	printf("%c", *(strchr_r(str, ',')));
}
