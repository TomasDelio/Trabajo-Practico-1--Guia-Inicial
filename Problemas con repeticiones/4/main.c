#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    for(i = 1; i <= 15; i++){
    printf("Escribe un numero\n");
    scanf("%d",&n);

    printf("El numero %d convertido a positivo es %d \n",n, abs(n));
    }
    return 0;
}
