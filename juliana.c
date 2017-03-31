#include <stdio.h>

int main(void) {
	
	double salario;
	double totalvendas;
	scanf("%lf %lf", &salario, &totalvendas);
	double total = salario + (totalvendas*15)/100;
	printf("TOTAL = %.2f\n", total);

return 0;

}
	 
