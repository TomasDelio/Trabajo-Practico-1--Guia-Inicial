#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalpersonas=0,totalmujeres=0,totalhombres=0,porcentajemujeres=0 ,porcentajehombres=0;

    printf("ingrese la cantidad de mujeres en el salon: ");
    scanf("%i", &totalmujeres);
    printf("Ingrese la cantidad de hombres en el salon: ");
    scanf("%i", &totalhombres);

totalpersonas= totalhombres+totalmujeres;
porcentajehombres= totalhombres*100/totalpersonas;
porcentajemujeres= totalmujeres*100/totalpersonas;

printf("El procentaje de hombres en el salon es de %i\n", porcentajehombres) ;
printf("El procentaje de mujeres en el salon es de %i\n", porcentajemujeres) ;


return 0;
}
