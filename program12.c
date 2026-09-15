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
