#include <stdio.h>

int main(){
	float graus, fahrenheit = 0;
	printf("Digite o valor em graus Celsius: ");
	fflush(stdout);
	scanf("%f", &graus);
	fahrenheit = graus*(9.0/5.0)+32.0;
	printf("Em C°: %f\n", graus);
	printf("Em F°: %f", fahrenheit);
	return 0;
}
