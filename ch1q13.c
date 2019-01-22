#include <stdio.h>

int main() {
	int c;
	int check = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (check == 1) {
				check = 0;
				printf("\n");
			}
		} else {
			check = 1;
			printf("@");
		}
	}
}
