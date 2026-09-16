#include <stdio.h>
int main()
{
float c; //centigrade 
  float f; //farhenheit
  printf("enter the temperature in centigrade \n");
  scanf("%f",&c);
  f=((c*9.0)/5)+32; //conversion of centigrade to farhenheit
  printf("the temperature in farhenheit is: %f \n",f);
  return 0;
}

/*Algorithm for Problem 13
Step 1: Start.
Step 2: Declare floating-point variables c (for centigrade) and f (for fahrenheit).
Step 3: Print the prompt "enter the temperature in centigrade \n".
Step 4: Read the float value from the user and store it in variable c.
Step 5: Calculate the temperature in Fahrenheit using the formula: f=((c \times 9.0)/5)+32.
Step 6: Print the calculated temperature using "the temperature in farhenheit is: %f \n".
Step 7: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare float c, f ]  <-- Rectangle (Process)
           |
           v
  /--------------------------------------------------\
 / Print "enter the temperature in centigrade \n"     \  <-- Parallelogram (Output)
/----------------------------------------------------/
           |
           v
  /------------------------------------\
 / Read c                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ f = ((c * 9.0) / 5) + 32 ]   <-- Rectangle (Process/Calculation)
           |
           v
  /----------------------------------------------------------\
 / Print "the temperature in farhenheit is: %f \n" (f)        \  <-- Parallelogram (Output)
/------------------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval

*/
