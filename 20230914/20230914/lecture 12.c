#include <stdio.h>
int main() {
	for (int i = 0; i < 5; i++) {
		if (i != 0) {
			printf("--------------------\n");
		}
		for (int j = 0; j < i; j++) {
			printf("   ");
		}
		printf("| ");
		if ((i + 1) % 2 == 0) {
			printf("X");
		}
		else {
			printf("O");
		}
		printf(" |\n");
	}
	return 0;
}