
#include <stdio.h>

// A program to copy its input to output, replacing
// each tab by '\t', each blank by '\b', and each backslash
// by '\\'.
void main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
		} else if (c == ' ') {
			printf("\\b");
		} else if (c == '\\') {
			printf("\\\\");
		} else {
			putchar(c);
		}
	}
}
