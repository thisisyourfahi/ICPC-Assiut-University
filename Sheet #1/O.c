#include <stdio.h>
int main(){
    int a, b;
    char s;
    scanf("%d", &a);
    scanf(" %c", &s);
    scanf("%d", &b);

    switch(s){
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
    }
    return 0;
}
