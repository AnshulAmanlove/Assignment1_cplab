#include <stdio.h>

int main() {
    // h is for hours, m is for minutes, tm is for total minutes
    int h, m, tm;

    // get the hours from the user
    printf("enter hours: ");
    scanf("%d", &h);

    // get the minutes from the user
    printf("enter minutes: ");
    scanf("%d", &m);

    // calculate total minutes (1 hour = 60 mins)
    tm = (h * 60) + m;

    // display the result
    printf("total minutes: %d\n", tm);

    return 0;
}
/*Algorithm for Problem 12
Step 1: Start.
Step 2: Declare integer variables h (hours), m (minutes), and tm (total minutes).
Step 3: Print the prompt "enter hours: ".
Step 4: Read the user's input and store it in variable h.
Step 5: Print the prompt "enter minutes: ".
Step 6: Read the user's input and store it in variable m.
Step 7: Calculate the total minutes by multiplying the hours by 60 and adding the remaining minutes: tm = (h \times 60) + m.
Step 8: Print the calculated total minutes using "total minutes: %d\n".
Step 9: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare int h, m, tm ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------\
 / Print "enter hours: "                \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read h                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter minutes: "              \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read m                               \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  [ tm = (h * 60) + m ]          <-- Rectangle (Process/Calculation)
           |
           v
  /------------------------------------\
 / Print "total minutes: %d\n" (tm)     \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
       ( Stop )   <-- Oval
*/
