#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    int pow = 1, reversed_number = 0;
    int original_num = x;
    while(x > 0){
        reversed_number = reversed_number * 10 + (x % 10);
        x /= 10;
    }

    printf("%d\n", reversed_number);
    (reversed_number == original_num) ? printf("YES\n") : printf("NO\n");
    
    return 0;
}
