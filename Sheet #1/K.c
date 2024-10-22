#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c){
        // a is max
        if(b >= c){
            // c is min
            printf("%d %d\n", c, a);
        }
        else{
            // b is min
            printf("%d %d\n", b, a);
        }
    }
    else if(b >= a && b >= c){
        // b is max
        if(a >= c){
            // c is min
            printf("%d %d\n", c, b);
        }
        else{
            // a is min
            printf("%d %d\n", a, b);
        }
    }
    else{
        // c is max
        if(a >= b){
            // b is min
            printf("%d %d\n", b, c);
        }
        else{
            // a is min
            printf("%d %d\n", a, c);
        }
    }
    return 0;
}
