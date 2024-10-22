#include <stdio.h>
#include <string.h>
int main(){
    char str[100000];
    scanf("%[^\n]s", str);
    for(int i = 0; i < strlen(str); i++){
        char ch = str[i];
        if(ch >= 65 && ch <= 90){
            ch = ch + 32;
            str[i] = ch;
        }
        else if(ch >= 97 && ch <= 122){
            ch = ch - 32;
            str[i] = ch;
        }
        else{
            str[i] = ' ';
        }
    }

    printf("%s\n", str);
    return 0;
}
