#include <stdio.h>

int main(){
	float celsius, kelvin;
	printf("Digite o valor em graus Celsius: ");
	fflush(stdout);
	scanf("%f", &celsius);
	kelvin = celsius + 273.15;
	printf("Em C°: %.1f\n", celsius);
	printf("Em K°: %.2f", kelvin);
	return 0;
}
