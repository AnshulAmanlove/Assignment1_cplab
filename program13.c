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
