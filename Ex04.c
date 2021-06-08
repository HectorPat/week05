#include <stdio.h>
int main(void) {
   float persona1, persona2, persona3, Total, T1, T2, T3;
  printf("ingresar dinero de la persona 1\n");
  scanf("%f",&persona1);
 printf("ingresar dinero de la persona 2\n");
  scanf("%f",&persona2);
  printf("ingresar dinero de la persona 3\n");
  scanf("%f",&persona3);
  Total= persona1+ persona2+ persona3;
  T1= (persona1/Total)*100;
  T2= (persona2/Total)*100;
  T3= (persona3/Total)*100;
  printf("El total es %0.2f\n ", Total);
  printf(" la persona 1 pagó el %0.2f\n porciento", T1);
  printf(" ,la persona 2 pagó el %0.2f\n porciento", T2);
  printf(" ,la persona 3 pagó el %0.2f\n porciento", T3);
}
