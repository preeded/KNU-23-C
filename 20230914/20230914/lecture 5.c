#include <stdio.h>
int main() {
	int year;
	scanf_s("%d", &year);
	printf("%s", year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? "YES" : "NO") : "YES") : "NO");
	return 0;
}