#include <stdio.h>

int main(){
	float valor, quinta;
	printf("Digite algum valor: ");
	fflush(stdout);
	scanf("%f", &valor);
	quinta = valor/5.0;
	printf("A quinta parte de %.2f � igual a %.2f.", valor, quinta);
	return 0;
}
