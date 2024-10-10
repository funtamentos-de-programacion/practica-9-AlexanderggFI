/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = arr;
    int size = sizeof(arr)/sizeof(arr[0]); //Cuando se desconoce el tamaño
    int *end = start+(size-1);
    
    
    printf("[");
    for(int i=0; i < 5; i++){
        printf("%d,", (arr[i]));
    }
    printf("]");

     
    while(start < end){ //Mientras el primero sea menor al ultimo
        int temp= *start; //Guardamos el valor almacenado de start en temp
        *start = *end; //El primer valor de start ahora sera el ultimo valor del "arreglo"
        *end = temp; //El ultimo valor del "arreglo" sera el valor almacenado en temp
        start++; //aumentamos start una vez cambiados los valores
        end--; //disminuimos end una vez cambiados los datos
    }



    // Mostrar el arreglo invertido
    printf("[");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    
    return 0;
}
