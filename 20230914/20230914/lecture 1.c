// 20230914.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int num;
	printf("1.정수입력:");
	scanf_s("%d", &num);
	printf("2.키보드로 입력받은 값은 %%입니다.\n", num);
	return 0;
}