#include <stdio.h>

int main(){
	float valor, desconto;
	printf("Digite o sal�rio do funcion�rio R$: ");
	fflush(stdout);
	scanf("%f", &valor);
	desconto = valor*0.25;
	printf("Com o aumento, o novo sal�rio se torna R$%.2f.", valor+desconto);
	return 0;
}
