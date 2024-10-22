#include <stdio.h>
#include <string.h>
int main(){
    char s1[11];
    char s2[11];
    char s3[22];

    scanf("%s", s1);
    scanf("%s", s2);

    int len1, len2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    printf("%d %d\n", len1, len2);
    printf("%s%s\n", s1, s2);

    /* But the correct way to concatenate two or more strings
        together is
        strcat(s3, s1); // copy string1 to string3
        strcat(s3, s2); // copt string2 to new string3
        printf("%s\n", s3); 
    */


    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    printf("%s %s\n", s1, s2);
    return 0;

}
