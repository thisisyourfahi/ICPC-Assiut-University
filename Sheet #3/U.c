#include <stdio.h>
#include <stdbool.h>

bool sumofdigits(int i, int a, int b) {
    int sum = 0;
    while(i > 0) {
        int last_dig = i % 10;
        i /= 10;
        sum += last_dig;
    }

    if(sum >= a && sum <= b) {
        return true;
    }
    
    return false;
}

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(sumofdigits(i, a, b)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
