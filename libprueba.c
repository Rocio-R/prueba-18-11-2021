// implementar las funciones de libprueba.h aca
// imprime un saludo: Hola, name (name es el arg)
#include <stdio.h>
#include <stdlib.h>

void saludar(char *name){
  printf("Hola, %s\n", name);
}

// devuelve la enesima potencia de dos
int potencia_de_dos (int n) {
  // int j[n];
  // j[0] = n*n;
  int res = 1;
  for (int i = 0; i < n; i++) {
    res *=2;
  }
  return res;
  // printf("%d ", j[n]);
}

// imprime un array de enteros de dimension size
void print_array(int a[], int size){
  for(int i = 0; i < size; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}

// pone el resultado de u + v en result
// todos vectores de dimension n
void suma_vectorial(int u[], int v[], int result[], int n){
  for (int i = 0; i < n; i++) {
  result[i]= (u[i]+v[i]);
  }
};

// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
//void cifrar(char word[], int key){}
int buscar(int a[],int size,int search){
  for (int i = 0; i < size; i++) {
   if (a[i]==search)return i;
 }
 return ' ';
}
