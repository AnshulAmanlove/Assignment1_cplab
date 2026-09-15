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
