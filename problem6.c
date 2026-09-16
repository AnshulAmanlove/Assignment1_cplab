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

/*Algorithm for Problem 6
Step 1: Start.
Step 2: Declare an integer variable i, a float variable f, and a character variable c.
Step 3: Assign the value 10 to i, 5.5 to f, and 'A' to c.
Step 4: Declare pointers pi (integer pointer), pf (float pointer), and pc (character pointer).
Step 5: Assign the memory address of i to pi, the address of f to pf, and the address of c to pc.
Step 6: Print the integer value and its memory address using i and pi.
Step 7: Print the float value and its memory address using f and pf.
Step 8: Print the character value and its memory address using c and pc.
Step 9: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare and initialize: i=10, f=5.5, c='A' ]  <-- Rectangle (Process)
           |
           v
  [ Declare pointers: pi=&i, pf=&f, pc=&c ]       <-- Rectangle (Process)
           |
           v
  /----------------------------------------------------\
 / Print "int value: %d, address: %p" (i, pi)           \  <-- Parallelogram (Output)
/------------------------------------------------------/
           |
           v
  /----------------------------------------------------\
 / Print "float value: %f, address: %p" (f, pf)         \  <-- Parallelogram (Output)
/------------------------------------------------------/
           |
           v
  /----------------------------------------------------\
 / Print "char value: %c, address: %p" (c, pc)          \  <-- Parallelogram (Output)
/------------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval


*/
