#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                primary_diagonal += matrix[i][j];
            }
            if(i + j == n - 1) {
                secondary_diagonal += matrix[i][j];
            }
        }
    }

    printf("%d\n", abs(primary_diagonal - secondary_diagonal));
    return 0;
}
