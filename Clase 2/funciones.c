#include <stdio.h>

//Función que regresa un entero y recibe dos enteros.
int Suma(int x, int y){
    return x+y;
}

//Función que no recibe datos, ni entrega datos.
void ImprimirNombre(){
    printf("Eliuth\n");
}

int VariasCosas(int x, int y){
    int sumaDosNumeros = x + y;
    printf("EL primer numero: %d\n", x);
    printf("El segundo numero: %d\n", y);
    printf("La suma de ambos numeros es: %d\n", sumaDosNumeros);
    
    int multiplicacion = x * y;
    printf("La multiplicacion de ambos numeros es: %d\n\n",multiplicacion);
    
    return sumaDosNumeros;
}

void CambiarValor(int x){
    x += 10;
    printf("Dentro de la función: %d\n", x);
}

int main()
{
    //Creamos variables.
    int numero1 = 3;
    int numero2 = 7;
    int sumaNumeros;
    
    //Invocamos a la función.
    //sumaNumeros = numero1+numero2;
    sumaNumeros = Suma(numero1, numero2);
    
    printf("La suma de los numeros es: %d\n", sumaNumeros);
    ImprimirNombre();
    
    VariasCosas(numero1, numero2);
    VariasCosas(15,80);
    VariasCosas(8000, 9000);
    
    int numero = 5;
    CambiarValor(numero);
    printf("Fuera de la función: %d", numero);
}