#include<stdio.h>
int main() {
float Hora, Minuto, Segundo;
printf("Ingresar segundos");
scanf("%f",&Segundo);
Hora=(Segundo/3600);
Minuto=(Segundo/60);
printf("Horas: %.2f\n",Hora);
printf("Minutos: %.2f\n",Minuto);
printf("Segundos: %.0f",Segundo);
}
