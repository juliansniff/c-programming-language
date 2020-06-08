#include <stdio.h>
#include <ctype.h>

int htoi(char str[]);

int main() {
	char str[] = "0xFFF";

	printf("answer: %d\n", htoi(str));
	return 0;
}

int htoi(char str[]) {
	int i, answer;
	char c;

	answer = 0;
	for (i = 0; str[i] != '\0'; i++) {
		c = str[i];

		if (i == 1 && (c == 'x' || c == 'X')) {
			answer = 0;
			continue;
		}

		if (isdigit(c)) {
			c = c - '0';
		} else {
			c = tolower(c) - 'a' + 10;
		}

		answer = 16 * answer + c;
	}

	return answer;
}
