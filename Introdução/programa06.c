#include <stdio.h>

int main(){
	float graus, celsius = 0;
	printf("Digite algum valor em Fahrenheit: ");
	fflush(stdout);
	scanf("%f", &graus);
	celsius = 5.0*(graus-32.0)/9.0;
	printf("Em F°: %f\n", graus);
	printf("Em C°: %f", celsius);
	return 0;
}
