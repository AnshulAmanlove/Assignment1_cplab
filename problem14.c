#include <stdio.h>

int main() {
    // t is time, g is gravity, d is distance
    int t = 5;
    float g = 9.8;
    float d;

    // calculate distance using d = 1/2 * g * t^2
    // using 0.5 for 1/2 to make the math easy
    d = 0.5 * g * (t * t);

    // display the final answer
    printf("distance travelled is %f meters\n", d);

    return 0;
}

/*Algorithm for Problem 14
Step 1: Start.
Step 2: Declare an integer variable t and initialize it to 5 (representing time in seconds).
Step 3: Declare a floating-point variable g and initialize it to 9.8 (representing gravity).
Step 4: Declare a floating-point variable d to store the calculated distance.
Step 5: Calculate the distance using the formula: d = 0.5 \times g \times (t \times t).
Step 6: Print the calculated distance using the message "distance travelled is %f meters\n".
Step 7: Stop.*/

/*
       ( Start )  <-- Oval
           |
           v
  [ Declare int t = 5, float g = 9.8, float d ]  <-- Rectangle (Process)
           |
           v
  [ d = 0.5 * g * (t * t) ]      <-- Rectangle (Process/Calculation)
           |
           v
  /--------------------------------------------------------\
 / Print "distance travelled is %f meters\n" (using d)      \  <-- Parallelogram (Output)
/----------------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval
*/
