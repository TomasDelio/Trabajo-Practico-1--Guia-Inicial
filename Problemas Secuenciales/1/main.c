#include <stdio.h>
#include <stdlib.h>

int main()

{
    float capital,ganancia;

    printf("Ingresa el capital \n");
    scanf("%f",&capital);
    ganancia = capital * .02;

    printf("La ganancia en un mes es: $ %.2f \n",ganancia);
    printf("EL capital total es: $ %.2f \n",capital + ganancia);

    return 0;
}
