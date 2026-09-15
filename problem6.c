#include <stdio.h>

int main() {
    // declare basic variables and assign values
    int i = 10;
    float f = 5.5;
    char c = 'A';

    // create pointers to hold the memory addresses
    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    // print the values and addresses using the pointers
    printf("int value: %d, address: %p\n", i, (void*)pi);
    printf("float value: %f, address: %p\n", f, (void*)pf);
    printf("char value: %c, address: %p\n", c, (void*)pc);

    return 0;
}
