#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("floor %d / %d = %d\n", a, b, (int)floor((float)a / b));
    printf("ceil %d / %d = %d\n", a, b, (int)ceil((float)a / b));
    printf("round %d / %d = %d\n", a, b, (int)round((float)a / b));

    return 0;
}