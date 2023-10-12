#include <stdio.h>

int main()
{
	int a = 3, * ptr1, * ptr2;
	ptr1 = &a;
	char b='a';
	ptr2 = &b;
	printf("%p %p\n", ptr1, ptr2);
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;
	*pnum += 30;
	pnum = &num2;
	*pnum -= 30;
	printf("num1: %d\nnum2: %d\n", num1, num2);
	int arr[3] = { 0, 1, 2 };
	printf("Label: %p\nFirst: %p\nSecond: %p\nThird: %p\n", arr, &arr[0], &arr[1], &arr[2]);
	int score[5] = { 87, 92, 94, 65, 33 };
	int cnt;
	int* p_score = score;
	for (cnt = 0; cnt < 5; cnt++) {
		printf("%d\n", *p_score);
		p_score++;
	}
	return 0;
}
