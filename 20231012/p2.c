#include <stdio.h>
#define SIZE 5

void swap(int* a, int* b) {
	int c = *b;
	*b = *a;
	*a = c;
	return;
}

void sort(int* arr) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = i+1; j < SIZE; j++) {
			if (arr[i] > arr[j]) {
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

int main()
{
	int arr[SIZE] = { 5, 3, 1, 2, 4 };
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	sort(arr);
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;
}
