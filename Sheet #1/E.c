#include <stdio.h>
int main(){
    float radius;
    scanf("%f", &radius);

    double area = 3.141592653 * radius * radius;
    printf("%.9lf\n", area);

    return 0;
}