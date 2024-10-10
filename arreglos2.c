#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    
    for(int i=0; i < 5; i++){
        printf("[");
        printf("%d", *(ptr+i));
        printf("]");
    }

    printf("\n");
     for(int i=2; i < 5; i++){
        printf("[");
        printf("%d", *(ptr+i));
        printf("]");
    }
    printf("\n");
    return 0;
}