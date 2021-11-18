#include <stdio.h>
#include <stdlib.h>
//#include "libprueba.h"
// int buscar(int a[],int size,int search){
// for (int i = 0; i < size; i++) {
//   if (a[i]==search)return i;
 //}
// return ' ';
int main(int argc, char *argv[]) {
  // el primer argumento es la clave para cifrar
  // la cantidad de letras a desplazar (un entero)
  char word[26] ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
    'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
     'v', 'w', 'x', 'y', 'z'};
  int key = atoi(argv[1]);
  printf("%d\n", buscar(word,26,key));
  // para cada arg restante tratado como un string cada uno
  // cifrarlos con la clave e imprimir el mensaje entero cifrado
  // ejemplo: ./a.out 2 ab cd => cd ef

  return 0;
}
