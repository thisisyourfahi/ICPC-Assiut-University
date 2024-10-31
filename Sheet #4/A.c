#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    scanf("%s %s", s1, s2);

    int len1 = strlen(s1), len2 = strlen(s2);
    printf("%d %d\n", len1, len2);
    printf("%s %s\n", s1, s2);
    return 0;
}
