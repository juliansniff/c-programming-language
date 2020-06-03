#include <stdio.h>

// A program to copy its input to output, replacing
// each string of one or more blanks by a single blank.
void main() {
	int c;
	int blank = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			blank = 1;
		} else {
			if (blank) {
				putchar(' ');
				blank = 0;
			}
			putchar(c);
		}
	}
}
