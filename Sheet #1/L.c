#include <stdio.h>
#include <string.h>
int main(){
    char f1[1000], s1[1000], f2[1000], s2[1000];
    scanf("%s %s %s %s", f1, s1, f2, s2);

    for(int i = 0; i < strlen(s1); i++){
        if(s1[i] != s2[i]){
            printf("NOT\n");
            return 0;
        }
    }
    printf("ARE Brothers\n");
    return 0;
}
