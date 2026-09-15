# include <stdio.h>
int main()
{
  //to print the values from the variable
  int a;
  float f;
  double d;
  printf("enter the integer , float and a double value simultaneously");
  scanf("%d %f %lf", &a ,&f , &d);
    
  printf("the integer value is %d\n",a);
  printf("the float value is %f\n",f);
  printf("the double value is %lf",d);
  
  return 0;
}

/*Step 1: Start.
Step 2: Declare an integer variable a, a float variable f, and a double variable d.
Step 3: Print a message to the user: "enter the integer, float and a double value simultaneously".
Step 4: Read three values entered by the user and store them in the variables a, f, and d.
Step 5: Print a message displaying the integer value: "the integer value is %d\n" where %d is the value of a.
Step 6: Print a message displaying the float value: "the float value is %f\n" where %f is the value of f.
Step 7: Print a message displaying the double value: "the double value is %lf" where %lf is the value of d.
Step 8: Stop.*/
