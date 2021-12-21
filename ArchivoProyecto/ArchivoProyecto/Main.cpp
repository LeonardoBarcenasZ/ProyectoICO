#include <stdio.h>
#include "FuncionSuma.h"
#include "FuncionResta.h"
#include "FuncionMultiplicacion.h"
#include "FuncionDivision.h"

int main()
{
	int NumeroUno, NumeroDos;

	printf("Introduzca el primer numero: ");
	scanf_s("%i", &NumeroUno);

	printf("Segundo numero: ");
	scanf_s("%i", &NumeroDos);

	//Jesus Ramirez//
	//El hizo la Funcion Suma//

	int Resultado_Suma = sumar(NumeroUno, NumeroDos);
	printf("El resultado de la suma: %i\n", Resultado_Suma);

	//Mario Ledezma//
	//El hizo la Funcion Resta//

	int Resultado_Resta = restar(NumeroUno, NumeroDos);
	printf("El resultado de la resta: %i\n", Resultado_Resta);

	//Felipe Leco//
	//El hizo la funcion de multiplicacion//

	int Resultado_Multiplicacion = multiplicar(NumeroUno, NumeroDos);
	printf("El resultado de la multiplicacion: %i\n", Resultado_Multiplicacion);

	//Brian Cuevas//
	//El hizo la funcion de division//

	int Resultado_Division = dividir(NumeroUno, NumeroDos);
	printf("El resultado de la division: %i\n", Resultado_Division);

}