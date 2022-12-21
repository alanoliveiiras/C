#include <stdio.h>

int main(){
	float graus, radiano;
	printf("Digite o ângulo em graus: ");
	fflush(stdout);
	scanf("%f", &graus);
	radiano = 3.14 * graus/180;
	printf("O radiano de %.2f é igual a %.2f", graus, radiano);
	return 0;
}
