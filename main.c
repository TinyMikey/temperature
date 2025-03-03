#include <stdio.h>

int conversion();

int main() {
	printf("\nFahrenheit to Celsius.\n");
	conversion();
}

int conversion() {
	int step, lower, upper, fahr;
	float cels;
	step = 20;
	lower = 0;
	upper = 300;
	
	for(fahr = lower; fahr <= upper; fahr = fahr + step) {
		cels = (fahr-32.0)/(9.0/5.0);
		printf("\n%6d\t%9.1f", fahr, cels);
	}
}
