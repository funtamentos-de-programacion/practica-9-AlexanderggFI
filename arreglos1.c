#include <stdio.h>
#include <string.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    char str[] = "hola mundo";
    char str2[]= {'A','d','i','o','s'};

    
    
    for(int i=0; i < 5; i++){
        printf("[");
        printf("%d", arr[i]);
        printf("]");
    }
    
    
    int length = strlen(str);
    
    printf("\n");
    for(int k=0; k < length; k++){
        printf("");
        printf("%c", str[k]);
        printf("");
    }

    
    
    int length2 = strlen(str2);
    
    printf("\n");
    for(int j=0; j < length2; j++){
        printf("[");
        printf("%c", str2[j]);
        printf("]\n");
    }

    return 0;
}