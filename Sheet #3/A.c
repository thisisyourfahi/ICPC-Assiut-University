#include <math.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("%lld\n", abs(sum));
    return 0;
}
