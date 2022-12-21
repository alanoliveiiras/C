#include <stdio.h>

int main(){
	float valor, desconto;
	printf("Digite o salário do funcionário R$: ");
	fflush(stdout);
	scanf("%f", &valor);
	desconto = valor*0.25;
	printf("Com o aumento, o novo salário se torna R$%.2f.", valor+desconto);
	return 0;
}
