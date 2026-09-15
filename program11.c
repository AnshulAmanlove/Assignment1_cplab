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
