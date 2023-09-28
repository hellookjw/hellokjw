#include <stdio.h>

int main() {
    double kilometers, miles;

    printf("please enter kilometers: ");
    scanf("%lf", &kilometers);

    miles = kilometers / 1.60934;

    printf("%.1lf km is equal to %.1lf miles.\n", kilometers, miles);

    return 0;
}
