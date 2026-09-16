#include <stdio.h>
#include <math.h>

int main() {
    // ke is kinetic energy, m is mass, v is velocity
    float ke, m, v;

    // get the kinetic energy from the user
    printf("enter kinetic energy: ");
    scanf("%f", &ke);

    // get the mass from the user
    printf("enter mass: ");
    scanf("%f", &m);

    // calculate velocity using rearranged formula
    v = sqrt((2 * ke) / m);

    // display the result
    printf("velocity of the particle is %f\n", v);

    return 0;
}

/*Algorithm for Problem 15
Step 1: Start.
Step 2: Declare floating-point variables ke (kinetic energy), m (mass), and v (velocity).
Step 3: Print the prompt "enter kinetic energy: ".
Step 4: Read the user's input and store it in the variable ke.
Step 5: Print the prompt "enter mass: ".
Step 6: Read the user's input and store it in the variable m.
Step 7: Calculate the velocity using the rearranged formula: v = \sqrt{\frac{2 \cdot ke}{m}}.
Step 8: Print the calculated velocity using the message "velocity of the particle is %f\n".
Step 9: Stop.*/

/*
       ( Start )  <-- Oval
           |
           v
  [ Declare float ke, m, v ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------\
 / Print "enter kinetic energy: "       \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read ke                              \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter mass: "                 \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read m                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ v = sqrt((2 * ke) / m) ]     <-- Rectangle (Process/Calculation)
           |
           v
  /------------------------------------------------\
 / Print "velocity of the particle is %f\n" (v)     \  <-- Parallelogram (Output)
/----------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval

*/
