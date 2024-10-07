#include <stdio.h>
int main(){
    long long n, m;
    scanf("%lld %lld", &n, &m);

    int sum = (n % 10) + (m % 10);
    printf("%d\n", sum);
    return 0;
}