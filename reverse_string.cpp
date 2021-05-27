#include<stdio.h>
void reverse(char*);
int main() {
	char a[20];
	gets_s(a);
	reverse(a);
}
void reverse(char* a) {
	if (!*a) {
		printf("\0"); //null 미포함 출력시 제거
		return;
	}
	reverse(a+1);
	printf("%c", *a);
}
