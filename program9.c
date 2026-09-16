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

/*Step 1: Start.
Step 2: Declare integer variables m1, m2, m3 (for the three subjects), and t (for total).
Step 3: Declare floating-point variables avg (for average) and p (for percentage).
Step 4: Print the prompt "enter marks in first subject, second subject and third subject".
Step 5: Read three integer values from the user and store them in m1, m2, and m3.
Step 6: Calculate the total marks by adding the three subjects: t = m1 + m2 + m3.
Step 7: Calculate the average: avg = (m1 + m2 + m3) / 3.0.
Step 8: Calculate the percentage assuming each subject is out of 100: p = (t / 300.0) * 100.
Step 9: Print the calculated total marks (t) and average marks (avg).
Step 10: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare int m1, m2, m3, t and float avg, p ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------------------------------------------\
 / Print "enter marks in first subject, second subject and third subject"   \  <-- Parallelogram (Output)
/----------------------------------------------------------------------------/
           |
           v
  /------------------------------------\
 / Read m1, m2, m3                      \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ t = m1 + m2 + m3 ]           <-- Rectangle (Process)
           |
           v
  [ avg = (m1 + m2 + m3) / 3.0 ] <-- Rectangle (Process)
           |
           v
  [ p = (t / 300.0) * 100 ]      <-- Rectangle (Process)
           |
           v
  /----------------------------------------------------------------------\
 / Print "the total marks... %d and the average... %f" (using t and avg)  \  <-- Parallelogram (Output)
/--------------------------------------------------------------------------/
           |
           v
       ( Stop )   <-- Oval

*/
