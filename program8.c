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

/*Algorithm for Problem 8
Step 1: Start.
Step 2: Declare an integer variable x and initialize it with the value 25.
Step 3: Declare an integer pointer p.
Step 4: Assign the memory address of x to the pointer p (using p = &x).
Step 5: Print the value of the variable x directly.
Step 6: Print the memory address of the variable x (using &x).
Step 7: Print the memory address stored inside the pointer p.
Step 8: Print the value of the variable x by using the dereference operator on the pointer (using *p).
Step 9: Stop.*/

/*       ( Start )  <-- Oval
           |
           v
  [ Declare int x = 25 and int *p ]  <-- Rectangle (Process)
           |
           v
  [ Assign pointer: p = &x ]         <-- Rectangle (Process)
           |
           v
  /--------------------------------------------\
 / Print "variable value: %d\n" (x)             \  <-- Parallelogram (Output)
/----------------------------------------------/
           |
           v
  /--------------------------------------------\
 / Print "variable address: %p\n" (&x)          \  <-- Parallelogram (Output)
/----------------------------------------------/
           |
           v
  /--------------------------------------------\
 / Print "address stored in pointer: %p\n" (p)  \  <-- Parallelogram (Output)
/----------------------------------------------/
           |
           v
  /--------------------------------------------\
 / Print "value accessed via pointer: %d\n" (*p)\  <-- Parallelogram (Output)
/----------------------------------------------/
           |
           v
       ( Stop )   <-- Oval
*/
