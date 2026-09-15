#include <stdio.h>

int main() {
    // t is time, g is gravity, d is distance
    int t = 5;
    float g = 9.8;
    float d;

    // calculate distance using d = 1/2 * g * t^2
    // using 0.5 for 1/2 to make the math easy
    d = 0.5 * g * (t * t);

    // display the final answer
    printf("distance travelled is %f meters\n", d);

    return 0;
}
