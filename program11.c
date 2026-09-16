#include <stdio.h>
int main()
{
float h;
float w;
  float area;
  printf ("enter the height and width simultaneously \n");
  scanf("%f %f", &h, &w);
  area=h*w*(1.0);
  printf("the area of the rectangle is: %f ", area);
  return 0;
}

/*Algorithm for Problem 11 (Area Calculation)
Step 1: Start.
Step 2: Declare floating-point variables h (height), w (width), and area.
Step 3: Print the prompt "enter the height and width simultaneously \n".
Step 4: Read two float values from the user and store them in h and w.
Step 5: Calculate the area using the formula: area = h * w * (1.0).
Step 6: Print the calculated area using the message "the area of the rectangle is: %f ".
Step 7: Stop.*/

/*       ( Start )  <-- Oval
           |
           v
  [ Declare float h, w, area ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------------------------\
 / Print "enter the height and width simultaneously \n"   \  <-- Parallelogram (Output)
/--------------------------------------------------------/
           |
           v
  /------------------------------------\
 / Read h, w                            \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ area = h * w * (1.0) ]       <-- Rectangle (Process/Calculation)
           |
           v
  /------------------------------------------------\
 / Print "the area of the rectangle is: %f " (area) \  <-- Parallelogram (Output)
/--------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval

*/
