#include <stdio.h>

#define IN  1
#define OUT 0

int add(int x, int y) {
	return x + y;
}

// A program that prints its input one word per line.
void main() {
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		} else {
			state = IN;
			putchar(c);
		}
	}
}
