# include <stdio.h>
int main()
{
int a; //first number
  int b; //second number 
  int s; //sum of the digits

  //taking inputs from the user
  printf("enter the number 1 and number 2\n");
  scanf("%d %d", &a, &b);

  s=a+b; //computation of sum

  //printing the sum
  printf("the sum of the number is : %d", s);
  return 0;
}

/*Algorithm for Problem 4
Step 1: Start.
Step 2: Declare integer variables a (first number), b (second number), and s (sum).
Step 3: Print the prompt "enter the number 1 and number 2\n".
Step 4: Read two integer values from the user and store them in a and b.
Step 5: Calculate the sum by adding a and b, and store the result in s (s = a + b).
Step 6: Print the result "the sum of the number is : %d" displaying the value of s.
Step 7: Stop. */

/* flowchart 

       ( Start )  <-- Oval
           |
           v
  [ Declare int a, int b, int s ]  <-- Rectangle (Process/Initialization)
           |
           v
  /-------------------------------------------\
 / Print "enter the number 1 and number 2\n"   \  <-- Parallelogram (Output)
/---------------------------------------------/
           |
           v
  /-------------------------------------------\
 / Read a, b                                   \  <-- Parallelogram (Input)
/---------------------------------------------/
           |
           v
  [ s = a + b ]  <-- Rectangle (Process/Calculation)
           |
           v
  /-------------------------------------------\
 / Print "the sum of the number is : %d" (s)   \  <-- Parallelogram (Output)
/---------------------------------------------/
           |
           v
       ( Stop )   <-- Oval

*/
