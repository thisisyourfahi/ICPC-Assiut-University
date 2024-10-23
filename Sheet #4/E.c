#include <stdio.h>
#include <string.h>

int main(){
    char str[1000000];
    scanf("%s", str);

    int sum = 0;
    for(int i = 0; i < strlen(str); i++){
        int digit = str[i] - '0';
        sum += digit;
    }

    printf("%d\n", sum);
    return 0;
}
