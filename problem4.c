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
