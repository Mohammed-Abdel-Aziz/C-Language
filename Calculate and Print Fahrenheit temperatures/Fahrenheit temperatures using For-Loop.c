#include <stdio.h>

main() {
	int Fahrenheit, Celsius;

	printf("Fah\tCel\n");

	for (Fahrenheit = 0; Fahrenheit < 301; Fahrenheit = Fahrenheit + 20)
	{
		Celsius = 5 * (Fahrenheit - 32) / 9;
		printf("%d\t%d\n", Fahrenheit, Celsius);
	}
}