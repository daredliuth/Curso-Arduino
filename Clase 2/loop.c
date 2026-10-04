#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*for:
    Creamos una variable para contar.
    Establecemos la condición.
    Cambiamos el valor del contador.
    */
    for(int i=0; i<10; i++){
        printf("%d\n",i);
    }
    printf("Salimos del primer ciclo.\n");
    
    //Podemos decrementar o incrementar el valor.
    for(int i=10; i>0; i--){
        printf("%d\n",i);
    }
    printf("Salimos del segundo ciclo.\n");
    //La variable i solo existe dentro de las llaves del ciclo for.
    
    bool condicion = true;
    int numero = 0;
    
    while(condicion){
        printf("Estamos dentro del while.\n");
        numero += 2;
        if(numero > 10000){
            condicion = false;
        }
    }
    printf("Salimos del while.\n");
    
    condicion = true;
    numero = 0;
    do{
        printf("Estamos dentro del while.\n");
        numero += 2;
        if(numero > 10000){
            condicion = false;
        }
    }while(condicion);
    printf("Salimos del while.\n");
}