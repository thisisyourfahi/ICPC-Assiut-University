#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int x;
    scanf("%d", &x);
    bool found = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == x) {
                found = true;
                printf("will not take number\n");
                break;
            }
        }
        if(found == true) {
            break;
        }
    }
    if(found == false) {
        printf("will take number\n");
    }
    return 0;
}
