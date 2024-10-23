#include <string.h>
#include <stdio.h>

int main(){
    char str[] = "hello";
    char a[10000];
    scanf("%s", a);

    for(int i = 0, j = 0; i < strlen(a); i++){
        if(a[i] == str[j]){
            j++;
            if(j == 5){
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}
