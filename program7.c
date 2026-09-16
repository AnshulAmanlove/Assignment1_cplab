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

/*Algorithm for Problem 7
Step 1: Start.
Step 2: Declare variables i (integer), f (float), d (double), and c (character).
Step 3: Declare pointers pi, pf, pd, and pc and initialize them with the memory addresses of i, f, d, and c, respectively.
Step 4: Print "enter an int: " and read the user's input into i.
Step 5: Print "enter a float: " and read the user's input into f.
Step 6: Print "enter a double: " and read the user's input into d.
Step 7: Print "enter a char: " and read the user's input into c.
Step 8: Calculate the size of the integer (size_i) by subtracting the casted address of pi from pi + 1.
Step 9: Calculate the size of the float (size_f) by subtracting the casted address of pf from pf + 1.
Step 10: Calculate the size of the double (size_d) by subtracting the casted address of pd from pd + 1.
Step 11: Calculate the size of the character (size_c) by subtracting the casted address of pc from pc + 1.
Step 12: Print the calculated memory sizes in bytes for each data type.
Step 13: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare i(int), f(float), d(double), c(char) ]  <-- Rectangle (Process)
           |
           v
  [ Initialize pointers: pi=&i, pf=&f, pd=&d, pc=&c ] <-- Rectangle (Process)
           |
           v
  /------------------------------------\
 / Print "enter an int: "               \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read i                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter a float: "              \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read f                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter a double: "             \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read d                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter a char: "               \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read c                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ Calculate size_i, size_f, size_d, size_c ]  <-- Rectangle (Process)
  [ using pointer arithmetic casting         ]
           |
           v
  /--------------------------------------------------------\
 / Print memory sizes: int, float, double, char (in bytes)  \  <-- Parallelogram (Output)
/------------------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval

*/
