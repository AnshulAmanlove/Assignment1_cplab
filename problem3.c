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
