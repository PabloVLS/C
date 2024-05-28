#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    char tempA[101], tempB[101];

    while (1) {
        scanf("%s %s", a, b);

        if (strcmp(a, "0") == 0 && strcmp(b, "0") == 0){
            break;
        }

        int m = 10, n = 10;
        while (m > 9 || n > 9) {
            m = 0;
            n = 0;

            for (int i = 0; i < strlen(a); ++i){
                m += a[i] - '0';
            }
            for (int i = 0; i < strlen(b); ++i){
                n += b[i] - '0';
            }

            sprintf(tempA, "%d", m);
            sprintf(tempB, "%d", n);
            strcpy(a, tempA);
            strcpy(b, tempB);
        }

        int ans;
        if (m > n){
           ans = 1;
        }else if (n > m){
           ans = 2;
        }else{
            ans = 0;
        }

        printf("%d\n", ans);
    }

    return 0;
}
