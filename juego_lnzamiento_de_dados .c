//programa del lanzamiento de un dado de 6 lados utilizando un ciclo de 6000 veces
// para probar si el generador  de numeros aleatorios realmente producira numeros aleatorios
//lanza un dado de 6 lados 6000 veces
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 7

int main(){

    int cara;       //valor del dado entre 1 a 6 
    int tiro;       //contador de tiros 1 a 6000
    int frecuencia[ TAMANIO ] = {0};    //inicializa a cero la cuenta

    
    srand( time( NULL) );   //instruccion que inicializa el generador de numeros aleatorios 

    //tira el dado 6000 veces
    for( tiro = 1; tiro <= 6000; tiro++){
        cara = 1 + rand() %6;
        //reemplaza la instruccion switch del programa anterior, recondermos que 
        //utilizamos esa funcion con opciones case y break, aqui se reemplaza mediante arreglos
        ++frecuencia[cara]; 
    }

    printf("%s %17s \n", "Cara", "Frecuencia");

    //muestra los elementos 1-6 de frecuencia en forma tabular
    for(cara = 1; cara < TAMANIO; cara++){
        printf("%4d %17d \n", cara, frecuencia[cara] );
    }
    return 0;
}