/*Louca Matriz

3 1 5
2 9 8
7 6 4
1 2


soma a 1 linha e soma a 2 coluna que da = 24
*/

#include<stdio.h>

int main () {

    int i, j, l, c,a,b,soma=0;

    scanf("%d %d", &l, &c);

    int m[l][c];

    for(i = 1; i <= l; i++){
        for(j = 1; j <= c; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    scanf("%d %d", &a, &b);


     for(i = 1; i <= l; i++){
        for(j = 1; j <= c; j++) {
                if(i==a || j==b){
                    soma += m[i][j];
                }
        }
    }
    printf("%d\n", soma);

    return 0;
}
