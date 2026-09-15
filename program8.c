#include <stdio.h>

int main() {
    // declare a normal variable and a pointer
    int x = 25;
    int *p;

    // store the address of the variable in the pointer
    p = &x;

    // print the value and address using the variable
    льника
    printf("variable value: %d\n", x);
    printf("variable address: %p\n", (void*)&x);

    // print the address and value using the pointer (dereference operator)
    printf("address stored in pointer: %p\n", (void*)p);
    printf("value accessed via pointer: %d\n", *p);

    return 0;
}
