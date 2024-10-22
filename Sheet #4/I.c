#include <stdio.h>
#include <string.h>
int main(){
    char str[10000];
    scanf("%[^\n]s", str);

    int len = strlen(str);
    for(int i = 0, j = len - 1; i <= j; i++, j--){
        if(str[i] != str[j]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
