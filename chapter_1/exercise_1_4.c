#include <stdio.h>

// Print a table of Fahrenheit and Celsius numbers.
void main() {
	float fahr, cels;
	int lower, upper, step;;

	lower = 0;
	upper = 300;
	step = 30;

	cels = lower;

	printf("Celsius\tFahrenheit\n");
	while(cels <= upper) {
		fahr = ((9.0/5.0) * cels) + 32.0;
		printf("%7.0f\t%10.1f\n", cels, fahr);
		cels += step;
	}
}
