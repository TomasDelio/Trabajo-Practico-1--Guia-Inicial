#include <stdio.h>
#include <stdlib.h>

int main()
{

    int horastrabajo=0,horasextras=0,sueldobasico;

    printf("Ingrese sus horas trabajadas \n");
    scanf("%d",&horastrabajo);
if(horastrabajo >40){
    horasextras=horastrabajo - 40;
    sueldobasico=(40*300)+(horasextras*400);
}
else {
    sueldobasico=horastrabajo*300;
}
printf("El pago semanal por las horas trabajadas es de : \n",sueldobasico);

return 0;
}
