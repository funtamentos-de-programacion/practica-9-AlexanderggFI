#include <stdio.h>


int suma(int *, int);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int resultado = suma(arr, 5);
    
    printf(resultado);
    return 0;
}



//TODO: (13) Crea la función suma que realiza la suma de todos los elementos de un arreglo

int suma(int *a, int t){
    int add=0;
    for(int i=0; i<(t-1); i++){
        add = (int)(a[i]+a[i+1]);
    }
    return add;
}