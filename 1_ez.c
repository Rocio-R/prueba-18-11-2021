// escribir un programa que diga "Hola, x" donde x
// es un argumento (string)
// usar la funcion saludar de libprueba.h
#include <stdlib.h>
#include <stdio.h>
#include "libprueba.h"

int main(int argc, char *argv[]){
  char *name = argv[1];
  saludar(name);
}
