#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int totalsum = 0;
    for(int i = 1; i <= n; i++){
        totalsum += i;
    }
    printf("%d\n", totalsum);

    return 0;
}