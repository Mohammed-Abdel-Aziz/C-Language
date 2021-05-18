#include <stdio.h>

main() {
	int maxFahrenheit = 300, minFahrenheit = 0, Celsius;

	printf("Fah\tCel\n");
	while (minFahrenheit <= maxFahrenheit)
	{
		Celsius = 5 * (minFahrenheit - 32) / 9;
		printf("%d\t%d\n", minFahrenheit, Celsius);

		minFahrenheit = minFahrenheit + 20;
	}
}