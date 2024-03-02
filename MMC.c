#include <stdio.h>

int main() {
    int num1, num2, num3;
    int mmc = 1;

    printf("Digite os três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    while (mmc % num1 != 0 || mmc % num2 != 0 || mmc % num3 != 0) {
        mmc++;
    }

    printf("O MMC de %d, %d e %d é: %d\n", num1, num2, num3, mmc);

    return 0;
}
