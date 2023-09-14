#include <stdio.h>
int main() {
	for (int i = 2; i <= 9; i++) {
		if (i == 5) continue;
		for (int j = 0; j < 9; j++) {
			printf("%d * %d = %d\n", i, j + 1, i * (j + 1));
		}
	}
	return 0;
}