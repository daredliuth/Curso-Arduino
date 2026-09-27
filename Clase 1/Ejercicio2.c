#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Este es un comentario en un a linea.
    
    /*
    Con este
    comentario
    podemos
    usar muchas lineas
    */
    
    int entero1 = 5; //Variable 1.
    int entero2 = 9; //Variable 2.
    int suma; //Variable sin asignar valor.
    
    printf("Variable 1: %d\n", entero1); //Imprimimos la variable 1.
    printf("Variable 2: %d\n", entero2); //Option + ?
    
    suma = entero1 + entero2; //Suma de dos numeros.
    printf("Suma de ambos numeros %d\n", suma);
    
    int resta = entero1 - entero2;
    printf("Resta de ambos numeros %d\n", resta);
    
    bool menor = true; //Establecer variable a verdad.
    //bool menor = 1;
    menor = entero1 <= entero2;
    printf("Es menor?: %d\n", menor);
    
    bool mayor = entero1 >= entero2;
    printf("Es mayor?: %d\n", mayor);
    
    //Arreglos
    float arregloDecimales[5] = {1.0, 2.5, 8.72, 10.15, 4.2}; //Creamos un arreglo de 5 elementos.
    
    printf("Elemento 1 del arreglo: %f\n", arregloDecimales[0]); //Imprimimos el primer elemento del arreglo (Los programadores cominezan a contar desde 0).
    printf("Elemento 3 del arreglo: %f\n", arregloDecimales[2]);
    
    float divisionFlotante = arregloDecimales[3] / arregloDecimales[1]; //Podemos usar los arreglos como variables.
    printf("Division de flotantes: %f\n", divisionFlotante);
}