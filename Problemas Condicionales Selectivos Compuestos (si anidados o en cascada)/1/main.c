#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Escribe el primer numero \n");
    scanf("%i", &a);
    printf("Escribe el segundo numero \n");
    scanf("%i", &b);

    if (a==b) {
        printf("%i", a*b);
    }
    else if (a>b){
        printf("%i", a-b);
    }
    else {
        printf("%i",a+b);
    }
    return 0;
}
