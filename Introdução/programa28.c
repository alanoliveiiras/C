#include <stdio.h>

int main(){
	float hora, trabalhadas, salario, mais;
	printf("O valor da hora de trabalho R$: ");
	fflush(stdout);
	scanf("%f", &hora);
	printf("Horas trabalhadas no m�s: ");
	fflush(stdout);
	scanf("%f", &trabalhadas);
	salario = hora*trabalhadas;
	mais = salario*0.10;
	printf("O sal�rio da pessoa � igual a R$%.2f.", salario+mais);
	return 0;
}
