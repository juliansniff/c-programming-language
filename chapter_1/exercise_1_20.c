#include <stdio.h>

#define TABSTOP 4

// Replace every tab in the input with certain number of spaces.
int main() {
	int i;
	char c;

	while((c = getchar()) != EOF) {
		if (c == '\t') {
			for (i = 0; i < TABSTOP; i++) {
				putchar(' ');
			}
		} else {
			putchar(c);
		}
	}

	return 0;
}
