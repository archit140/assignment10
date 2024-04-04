#include <stdio.h>

// Define a structure named MyStruct
typedef struct MyStruct {
    int x;
    int y;
    char z;
}str;

// Define a union named MyUnion
typedef union MyUnion {
    int x;
    int y;
    char z;
}uni;

int main() {
    str Struct1;
    uni Union1;
    printf("Size of struct MyStruct: %d bytes\n", sizeof(Struct1));
    printf("Size of union MyUnion: %d bytes\n", sizeof(Union1));

    return 0;
}
