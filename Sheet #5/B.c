#include <stdio.h>

void print_sequence(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%d", i);
        if(i < n) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    print_sequence(n);

    return 0;
}
