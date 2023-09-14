#include <stdio.h>
int main() {
	int input_num;
	scanf_s("%d", &input_num);
	printf("%s", input_num > 0 ? "양수" : (input_num < 0 ? "음수" : "0"));
	return 0;
}