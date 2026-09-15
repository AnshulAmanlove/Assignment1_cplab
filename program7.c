#include <stdio.h>

int main() {
    // variables
    int i;
    float f;
    double d;
    char c;

    // pointers to those variables
    int *pi = &i;
    float *pf = &f;
    double *pd = &d;
    char *pc = &c;

    // take inputs from the user
    printf("enter an int: ");
    scanf("%d", &i);
    
    printf("enter a float: ");
    scanf("%f", &f);
    
    printf("enter a double: ");
    scanf("%lf", &d);
    
    printf("enter a char: ");
    scanf(" %c", &c);

    // find sizes using pointer arithmetic
    // casting to (char *) allows us to count the exact number of bytes between the two addresses
    int size_i = (char *)(pi + 1) - (char *)pi;
    int size_f = (char *)(pf + 1) - (char *)pf;
    int size_d = (char *)(pd + 1) - (char *)pd;
    int size_c = (char *)(pc + 1) - (char *)pc;

    // print the results
    printf("\n--- memory used ---\n");
    printf("int: %d bytes\n", size_i);
    printf("float: %d bytes\n", size_f);
    printf("double: %d bytes\n", size_d);
    printf("char: %d bytes\n", size_c);

    return 0;
}
