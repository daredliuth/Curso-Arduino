#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool condicion = false;
    int velocidad = 20;
    
    //Nos permite elegis la ejecución de una sección de código.
    if(condicion){
        printf("La condición es verdadera.");
    }
    
    //if-else, nos deja elegir entre dos secciones de código.
    if(velocidad < 20){
        printf("La velocidad es baja.\n");
    }
    else{
        printf("La velocidad es alta.\n");
    }
    
    //else-if nos permite elegir entre varias condiciones.
    int numero = 3;
    
    if(numero == 1){
        printf("1\n");
    }
    else if(numero == 2){
        printf("2\n");
    }
    else if(numero == 3){
        printf("3\n");
    }
    
    //switch, nos permite elegir entre diferentes valores.
    switch(numero){
        case 1:
            printf("1\n");
        break;
        
        case 2:
            printf("2\n");
        break;
        
        case 3:
            printf("Tres.\n");
        break;
        
        default:
            printf("Valor por defecto.");
        break;
    }
}
