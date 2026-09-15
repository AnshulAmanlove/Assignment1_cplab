#include <stdio.h>
#include <math.h>

int main() {
    // ke is kinetic energy, m is mass, v is velocity
    float ke, m, v;

    // get the kinetic energy from the user
    printf("enter kinetic energy: ");
    scanf("%f", &ke);

    // get the mass from the user
    printf("enter mass: ");
    scanf("%f", &m);

    // calculate velocity using rearranged formula
    v = sqrt((2 * ke) / m);

    // display the result
    printf("velocity of the particle is %f\n", v);

    return 0;
}
