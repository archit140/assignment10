#include <stdio.h>




typedef union DataUnion {
    int intArray[7];
    float floatArray[7];
    char charArray[7];
}uni;

int main() {
    uni data;

    
    for (int i = 0; i < 7; i++) {
        scanf("%d", &data .intArray[i]); 
    }

    
    printf("Integer Array Values: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", data.intArray[i]);
    }
    printf("\n");

    
    for (int i = 0; i < 7; i++) {
        scanf("%f", &data .floatArray[i]); 
        
    }

    printf("Float Array Values: ");
    for (int i = 0; i < 7; i++) {
        printf("%f ", data.floatArray[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; i++) {
        printf("%c ", data.charArray[i]);
    }

    
    printf("Character Array Values: ");
    for (int i = 0; i < 7; i++) {
        printf("%c ", data.charArray[i]);
    }
    printf("\n");

    return 0;
}
