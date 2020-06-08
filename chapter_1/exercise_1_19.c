#include <stdio.h>

void reverse(char str[]);

// Reverse a string.
int main() {
	char str[] = "hello, world";
	reverse(str);
	printf("%s\n", str);
}

void reverse(char str[]) {
	int i, j, len;
	char c;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (; i < len/2; i++) {
		j = len - i - 1;
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}

}
