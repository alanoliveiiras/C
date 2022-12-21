#include <stdio.h>

int main(){
	float jardas, metro;
	printf("Digite o valor em Jardas: ");
	fflush(stdout);
	scanf("%f", &jardas);
	metro = 0.91*jardas;
	printf("Em jardas: %.2f\n", jardas);
	printf("Em metros: %.2f", metro);
	return 0;
}
