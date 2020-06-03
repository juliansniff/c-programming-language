#include <stdio.h>

// Print a table of Fahrenheit and Celsius numbers.
void main() {
	float fahr, cels;

	printf("Fahrenheit\tCelsius\n");
	for (fahr = 300; fahr >= 0; fahr -= 30) {
		cels = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f\t%7.1f\n", fahr, cels);
	}
}
