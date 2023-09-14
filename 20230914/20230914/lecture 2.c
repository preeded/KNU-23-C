#include <stdio.h>

int main()
{
	char ch;
	char str[10];
	printf("1.문자 입력:");
	scanf_s("%c", &ch, sizeof(ch));
	printf("2.문자열입력:");
	scanf_s("%s", &str, sizeof(str));
	printf("입력한 문자 출력:%c\n");
	printf("입력한 문자열 출력:%s\n");
	return 0;
}