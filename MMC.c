#include <stdio.h>

int main() {
    int num1, num2, num3;
    int mmc = 1;

    printf("Digite os tr�s n�meros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    while (mmc % num1 != 0 || mmc % num2 != 0 || mmc % num3 != 0) {
        mmc++;
    }

    printf("O MMC de %d, %d e %d �: %d\n", num1, num2, num3, mmc);

    return 0;
}
