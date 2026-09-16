#include <stdio.h>

int main() {
    // d is distance, m is mileage
    // p is price per litre, tc is total cost
    float d, m, p, tc;

    printf("enter distance: ");
    scanf("%f", &d);

    printf("enter mileage: ");
    scanf("%f", &m);

    printf("enter fuel price: ");
    scanf("%f", &p);

    // find total cost
    tc = (d / m) * p;

    printf("total cost is %f\n", tc);

    return 0;
}

/*Step 1: Start.
Step 2: Declare floating-point variables d (distance), m (mileage), p (price per litre), and tc (total cost).
Step 3: Print the prompt "enter distance: ".
Step 4: Read the user's input and store it in variable d.
Step 5: Print the prompt "enter mileage: ".
Step 6: Read the user's input and store it in variable m.
Step 7: Print the prompt "enter fuel price: ".
Step 8: Read the user's input and store it in variable p.
Step 9: Calculate the total fuel cost using the formula: tc = (d / m) * p.
Step 10: Print the calculated total cost using "total cost is %f\n".
Step 11: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare float d, m, p, tc ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------\
 / Print "enter distance: "             \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read d                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter mileage: "              \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read m                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter fuel price: "           \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read p                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ tc = (d / m) * p ]           <-- Rectangle (Process/Calculation)
           |
           v
  /------------------------------------\
 / Print "total cost is %f\n" (tc)      \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
       ( Stop )   <-- Oval
*/
