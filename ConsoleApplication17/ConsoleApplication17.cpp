#include <stdio.h>
#include <math.h>
int main() {
	double x;
	printf("чему равен x: ");
	scanf("%lf", &x);
	double y = log10(x);
	printf("Десятичный логарифм от %.2f в %.2f\n", x, y);
	y *= 2;
	printf("Значение у, умноженное на 2: %.2f\n", y);
	return 0;
}