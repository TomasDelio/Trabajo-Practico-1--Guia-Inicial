#include <stdio.h>
#include <stdlib.h>

int main()
{
    float suma_total=0, promedio_=0, nota_;

    printf("ingrese la primer nota");
    scanf("%f",&nota_);
    suma_total=suma_total+nota_;

    printf("ingrese la segunda nota nota");
    scanf("%f",&nota_);
    suma_total=suma_total+nota_;

    printf("ingrese la tercera nota");
    scanf("%f",&nota_);
    suma_total=suma_total+nota_;

    promedio_=suma_total/3;

    if(promedio_>=7)
    {
        printf("Aprobo la materia con un promedio de %f\n",promedio_);
    }
    else
        printf("Desaprobo la materia con un primedio de %f\n ", promedio_);


    return 0;
}
