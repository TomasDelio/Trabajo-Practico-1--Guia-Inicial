#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,cubo,cuarta;

    for (i = 1; i <= 10; i++){
        printf("Ingresa un numero\n");
        scanf("%d",&n);

        cubo = n*n*n;
        cuarta = cubo * n;

        printf("El cubo del numero %d es: %d\n",n,cubo);
        printf("La cuarta del numero %d es: %d\n",n,cuarta);

    }
    return 0;
}
