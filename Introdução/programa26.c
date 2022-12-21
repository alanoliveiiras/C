#include <stdio.h>

int main(){
	float valor, desconto;
	printf("Digite o valor R$: ");
	fflush(stdout);
	scanf("%f", &valor);
	desconto = valor*0.12;
	printf("Com os descontos, o valor passa a se tornar R$%.2f.", valor-desconto);
	return 0;
}
