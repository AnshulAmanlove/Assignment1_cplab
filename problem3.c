# include <stdio.h>
int main()
{ //to print forename , surname and date of birth of a student
  char fn;
  char sn;
  int yob;

  //entering the forename
  printf("enter your forename:");
  scanf("%c", &fn);

  //entering the surname
  printf("enter your surname");
  scanf("%c", &sn);

  //enter the year of birth
  printf("enter your year of birth");
  scanf("%d", &yob);

  //displaying the results
  printf("forename : %c\n", fn);
  printf("surname: %c\n", sn);
  printf("year of birth: %d\n", yob);
  
  return 0;
}

/*Step 1: Start.
Step 2: Declare character variables fn and sn, and integer variable yob.
Step 3: Print "enter your forename:".
Step 4: Read input into variable fn.
Step 5: Print "enter your surname".
Step 6: Read input into variable sn.
Step 7: Print "enter your year of birth".
Step 8: Read input into variable yob.
Step 9: Print "forename : %c\n" displaying the value of fn.
Step 10: Print "surname: %c\n" displaying the value of sn.
Step 11: Print "year of birth: %d\n" displaying the value of yob.
Step 12: Stop.*/

/*

       ( Start )  <-- Oval
           |
           v
  [ Declare char fn, char sn, int yob ]  <-- Rectangle (Process)
           |
           v
  /------------------------------------\
 / Print "enter your forename:"         \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read fn                              \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter your surname"           \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read sn                              \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "enter your year of birth"     \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Read yob                             \  <-- Parallelogram (Input)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "forename : %c" (value fn)     \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "surname: %c" (value sn)       \  <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
  /------------------------------------\
 / Print "year of birth: %d" (value yob)\ <-- Parallelogram (Output)
/----------------------------------------/
           |
           v
       ( Stop )   <-- Oval


*/
