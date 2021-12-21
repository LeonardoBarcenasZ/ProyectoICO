#include <iostream>
int main()
{
    int NumeroUno, NumeroDos, multiplicacion;
    printf("Introducir una cantidad");
    scanf("%d", &NumeroUno);

    printf("Introducir una segunda cantidad");
    scanf("%d", &NumeroDos);

    multiplicacion = NumeroUno * NumeroDos;
    printf("La respuesta es:%d", multiplicacion);
}
