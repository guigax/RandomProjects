// Guilherme Fonseca - 2018-03-13
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, s, area;

	printf("Insira o lado A \n");
	scanf("%f", &a);
	printf("Insira o lado B \n");
	scanf("%f", &b);
	printf("Insira o lado C \n");
	scanf("%f", &c);

	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("Área do triângulo: %.2f\n", area);

	return 0;
}