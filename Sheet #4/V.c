#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int f_arr[100000] = {0};
    for(int i = 0; i < n; i++) {
        f_arr[arr[i]] += +1;
    }

    for(int i = 1; i <= m; i++){
        printf("%d\n", f_arr[i]);
    }
    return 0;
}
