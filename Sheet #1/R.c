#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int years = n / 365;
    n = n % 365;

    int months = n / 30;
    n = n % 30;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", n);

    return 0;
}