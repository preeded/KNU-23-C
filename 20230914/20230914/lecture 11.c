#include <stdio.h>
int main() {
	int i = 2;
	while (i <= 9) {
		if (i == 5) {
			i += 1;
			continue;
		}
		int j = 0;
		while (j < 9) {
			printf("%d x %d = %d\n", i, j + 1, i * (j + 1));
			j++;
		}
		i++;
	}
	return 0;
}