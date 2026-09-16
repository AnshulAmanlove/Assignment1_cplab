# include <stdio.h>
int main()
{
int a; //first number
int b; //second number
int s; //sum
int p; //product
int d; //difference
float div; //division

printf("enter the first number and second number");
scanf("%d %d", &a ,&b );
  s=a+b;
  p=a*b;
  d=a-b;
  div=a/b;
  printf("the sum is: %d \n", s);
  printf("the product is: %d \n", p);
  printf("the difference is: %d \n", d);
  printf("the division result is %f \n", div);
return 0;
}


/*Algorithm for Problem 5
Step 1: Start.
Step 2: Declare integer variables a, b, s, p, d, and float variable div.
Step 3: Print the message "enter the first number and second number".
Step 4: Read two integer values from the user and store them in a and b.
Step 5: Calculate the sum: s = a + b.
Step 6: Calculate the product: p = a \times b.
Step 7: Calculate the difference: d = a - b.
Step 8: Calculate the division: div = a / b.
Step 9: Print the sum: "the sum is: %d \n" displaying the value of s.
Step 10: Print the product: "the product is: %d \n" displaying the value of p.
Step 11: Print the difference: "the difference is: %d \n" displaying the value of d.
Step 12: Print the division result: "the division result is %f \n" displaying the value of div.
Step 13: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare int a, b, s, p, d and float div ]  <-- Rectangle (Process)
           |
           v
  /----------------------------------------------------\
 / Print "enter the first number and second number"     \  <-- Parallelogram (Output)
/------------------------------------------------------/
           |
           v
  /------------------------------------\
 / Read a, b                            \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ s = a + b ]  <-- Rectangle (Process)
           |
           v
  [ p = a * b ]  <-- Rectangle (Process)
           |
           v
  [ d = a - b ]  <-- Rectangle (Process)
           |
           v
  [ div = a / b ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------\
 / Print "the sum is: %d \n" (s)        \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "the product is: %d \n" (p)    \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "the difference is: %d \n" (d) \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------------\
 / Print "the division result is %f \n" (div) \  <-- Parallelogram (Output)
/--------------------------------------------/
           |
           v
       ( Stop )   <-- Oval


*/
