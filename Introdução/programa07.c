#include <stdio.h>

int main(){
	float kelvin, celsius;
	printf("Digite o valor em graus Kelvin: ");
	fflush(stdout);
	scanf("%f", &kelvin);
	celsius = kelvin - 273.15;
	printf("Em K°: %.2f\n", kelvin);
	printf("Em C°: %.2f", celsius);
	return 0;
}
