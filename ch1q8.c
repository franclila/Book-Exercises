#include <stdio.h>

int main() {
	int count = 0;
	int ch;

	while ((ch = getchar()) != EOF) {
		if (ch == '\n' || ch == '\t' || ch == ' ') {
			count++;
		}
	}
	printf("%d\n", count);
}

