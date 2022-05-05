#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   float n,suma = 0,promedio = 0;

    for (i = 1; i <= 7; i++){

    printf("Ingresa una calificacion\n");
    scanf("%f",&n);

    suma = suma + n;
    }
    promedio = suma / 7;

    printf("El promedio de las 7 calificaciones es: %f",promedio);
    return 0;
}
