#include <stdio.h>
int main(void){
    float Volumen, Radio, Altura, Area;
    const float pi=3.1416;
    printf("ingresar el radio");
    scanf("%f", &Radio);
    printf("ingresar altura");
    scanf("%f",&Altura);
    Area= (2*pi*Radio*Altura) + (2*pi*(Radio*Radio));
    Volumen=(pi*(Radio*Radio)*Altura);
    printf("tu Area es %.2f" ,Area); printf(" y tu volumen es %.2f" ,Volumen);
    }
