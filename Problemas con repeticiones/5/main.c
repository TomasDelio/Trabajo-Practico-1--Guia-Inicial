#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float cali,cali_baja,suma = 0,promedio = 0;

    for (i = 1; i <= 10; i++){
        printf("Ingresa una calificacion\n");
        scanf("%f",&cali);
        suma = suma + cali;
        if (i == 1){
            cali_baja = cali;
        }
        else{
            if (cali_baja > cali){
                cali_baja = cali;
            }
        }
    }
    promedio = suma / 10;

    printf("La calificacion media es: %f\n",promedio);
    printf("La calificacion mas baja es: %f\n",cali_baja);

    return 0;
}
