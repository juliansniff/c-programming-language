#include <stdio.h>

// A program that counts blanks, tabs, and newlines.
void main() {
	long blanks = 0;
	long tabs = 0;
	long newlines = 0;

	int c;

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;
		}
		if (c == '\t') {
			++tabs;
		}
		if (c == '\n') {
			++newlines;
		}
	}

	printf("blanks\ttabs\tnewlines\n", blanks, tabs, newlines);
	printf("%ld\t%ld\t%ld\n", blanks, tabs, newlines);
}
