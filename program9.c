#include <stdio.h>
int main()
{
int m1;
int m2;
int m3;
int t;
float avg;
float p;
printf("enter marks in first subject, second subject and third subject");
scanf("%d %d %d", &m1, &m2, &m3);
t=m1+m2+m3;
avg=(m1+m2+m3)/3.0;
p=(t/300.0)*100;

printf("the total marks in three subjects are %d and the average marks in three subjects are %f and the percentage marks are %f",t , avg , p );

return 0;
}
