#include <stdio.h>

int main() {
    // d is distance, m is mileage
    // p is price per litre, tc is total cost
    float d, m, p, tc;

    printf("enter distance: ");
    scanf("%f", &d);

    printf("enter mileage: ");
    scanf("%f", &m);

    printf("enter fuel price: ");
    scanf("%f", &p);

    // find total cost
    tc = (d / m) * p;

    printf("total cost is %f\n", tc);

    return 0;
}
