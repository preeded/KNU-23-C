#include <stdio.h>
int main() {
	int score;
	scanf_s("%d", &score);
	if (score > 100 || score < 0)
		printf("�߸� �Է�");
	else if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");
	return 0;
}