// escribir un programa que llame 4 veces a la funcion
// potencia_de_dos de libprueba.h para imprimir cuatro
// potencias de dos correspondientes a los numeros a, b, c y d
// ingresados como argumentos
// ejemplo: ./a.out 0 1 2 3 imprime 1 2 4 8

#include <stdio.h>
#include <stdlib.h>
#include "libprueba.h"

int main(int argc, char *argv[]) {
  printf("%d ", potencia_de_dos(atoi(argv[1])));
  printf("%d ", potencia_de_dos(atoi(argv[2])));
  printf("%d ", potencia_de_dos(atoi(argv[3])));
  printf("%d\n", potencia_de_dos(atoi(argv[4])));

}
