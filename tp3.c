#include <stdio.h>

int main() {
	float peso, altura, imc;
	
	// Solicitar ingreso de datos al usuario
	printf("Ingrese el peso en kg: ");
	if (scanf("%f", &peso) != 1 || peso <= 0) {
		printf("Error: Ingrese un valor de peso valido.\n");
		return 1;
	}
	
	printf("Ingrese la altura en metros: ");
	if (scanf("%f", &altura) != 1 || altura <= 0) {
		printf("Error: Ingrese un valor de altura valido.\n");
		return 1;
	}
	
	// Calculo del Indice de Masa Corporal
	imc = peso / (altura * altura);
	
	// Mostrar el resultado con dos decimales
	printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
	
	// Mostrar la tabla de referencia
	printf("    Indice    |  Condicion\n");
	printf("-----------------------------\n");
	printf("    <18.5     |  Bajo peso\n");
	printf(" 18.5 a 24.9  |  Normal\n");
	printf(" 25.0 a 29.9  |  Sobrepeso\n");
	printf("     >=30     |  Obesidad\n");
	
	return 0;
}
