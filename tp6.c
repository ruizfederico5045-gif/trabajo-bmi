/*
* TP6 - Calculo de area y perimetro de rectangulo y circulo
* Repositorio GitHub: https://github.com/ruizfederico5045-gif/trabajo-bmi
*/

#include <stdio.h>

#define PI 3.14159265358979323846

// Declaracion de funciones
float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main() {
	int opcion;
	float longitud, altura, radio;
	float area, perimetro;
	
	// Menu y validacion de opcion seleccionada
	do {
		printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
		if (scanf("%d", &opcion) != 1 || (opcion != 1 && opcion != 2)) {
			printf("Error: Opcion invalida. Ingrese 1 o 2.\n");
			while (getchar() != '\n');
		} else {
			break;
		}
	} while (1);
	
	if (opcion == 1) {
		printf("Opcion de rectangulo seleccionada\n");
		
		// Ingreso y validacion de longitud
		do {
			printf("Ingrese la longitud del rectangulo: ");
			if (scanf("%f", &longitud) != 1 || longitud <= 0) {
				printf("Error: Ingrese una longitud valida mayor a 0.\n");
				while (getchar() != '\n');
			} else {
				break;
			}
		} while (1);
		
		// Ingreso y validacion de altura
		do {
			printf("Ingrese la altura del rectangulo: ");
			if (scanf("%f", &altura) != 1 || altura <= 0) {
				printf("Error: Ingrese una altura valida mayor a 0.\n");
				while (getchar() != '\n');
			} else {
				break;
			}
		} while (1);
		
		// Calculos mediante funciones
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		
	} else {
		printf("Opcion de circulo seleccionada\n");
		
		// Ingreso y validacion de radio
		do {
			printf("Ingrese el radio del circulo: ");
			if (scanf("%f", &radio) != 1 || radio <= 0) {
				printf("Error: Ingrese un radio valido mayor a 0.\n");
				while (getchar() != '\n');
			} else {
				break;
			}
		} while (1);
		
		// Calculos mediante funciones
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
	}
	
	// Impresion de resultados mediante la funcion indicada
	imprimirResultados(area, perimetro);
	
	return 0;
}

// Implementacion de las funciones

float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
	return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
	return 2 * PI * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}
