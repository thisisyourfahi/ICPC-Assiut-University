#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90){
        ch = ch + 32;
        printf("%c\n", ch);
    }
    else{
        ch = ch - 32;
        printf("%c\n", ch);
    }
    return 0;
}