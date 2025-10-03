#include <stdio.h>

int main() {
    int num_1, num_2;

    printf("Enter number 1 and 2:\n");
    scanf("%d %d", &num_1, &num_2);

    printf("Addition = %d\n", num_1 + num_2);
    printf("Subtraction = %d\n", num_1 - num_2);
    printf("Multiplication = %d\n", num_1 * num_2);

    if (num_2 == 0) {
        printf("DIVIDE BY ZERO ERROR!!\n");
    } else {
        printf("Division = %.2f\n", (double)num_1 / num_2);
        printf("Mod = %d\n", num_1 % num_2);
    }

    return 0;
}