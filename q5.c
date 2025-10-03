
#include <stdio.h>

int main() {
    float p = 0, t = 0, r = 0;

    printf("Enter Principal\n");
    scanf("%f", &p);

    printf("Enter Time\n");
    scanf("%f", &t);

    printf("Enter Rate\n");
    scanf("%f", &r);

    float si = (p * t * r) / 100;
    printf("Simple Interest = %.2f\n", si);

    return 0;
}