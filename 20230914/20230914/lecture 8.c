#include <stdio.h>
int main() {
	int score;
	scanf_s("%d", &score);
	score = score / 10;
	if (score > 100 || score < 0) {
		printf("잘못 입력");
		return 0;
	}
	switch (score) {
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
	}
	return 0;
}