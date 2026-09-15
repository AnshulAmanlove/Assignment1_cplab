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
