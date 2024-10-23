#include <stdio.h>
#include <string.h>
int main(){
    char a[30];
    char b[30];
    scanf("%s", a);
    scanf("%s", b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    int value = strcmp(a, b);
    if(value == 0) printf("%s\n", a);
    else if(value < 0) printf("%s\n", a);
    else printf("%s\n", b); 

    return 0;
}
