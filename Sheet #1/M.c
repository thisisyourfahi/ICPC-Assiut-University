#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);

    if(c >= 65 && c <= 90){
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(c >= 97 && c <= 122){
        printf("ALPHA\nIS SMALL\n");
    }
    else if(c >= 48 && c <= 57){
        printf("IS DIGIT\n");
    }
}