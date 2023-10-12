#include <stdio.h>

void swap(int* a, int* b) {
	int c = *b;
	*b = *a;
	*a = c;
	return;
}

int main()
{
	int a = 1, b = 2;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}
