#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90){
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(ch >= 97 && ch <= 122){
        printf("ALPHA\nIS SMALL\n");
    }
    else if(ch >= 48 && ch <= 57){
        printf("IS DIGIT\n");
    }
}