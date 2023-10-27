#include <stdio.h>
#include <string.h>
#define CANT_MAX 5 

int main (void){
    char txt1[]="Hola"; //El primer string dice hola
    char txt2[CANT_MAX]; //El segundo string tiene 5 espacios
    int i=0; 
    strcpy(txt2,txt1); //Al string 2 le copio el valor del string 1
    while(txt2[i])printf("%c",txt2[i++]); /*mientras que el index (i) valga caracteres positivos del string, 
    se van a imprimir los valores de los caracteres del string empezando en 0 y aumentando de a uno hasta el 5.
    Es decir que se imprimiran todos los caracteres del string 2 hasta llegar al nule '0' o caracter final */
    return 0;
}
