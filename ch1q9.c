#include <stdio.h>

int main() {
	int c;
	int check = 0;

	while ((c = getchar()) != EOF) {
		if ((check == ' ' || check == '\t') && (c == ' ' || c == '\t')) {
			check = c;
		} else {
			putchar(c);
			check = c;
		}
		
	}
}
