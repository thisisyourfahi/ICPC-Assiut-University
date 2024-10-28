#include <stdio.h>
#include <string.h>
char str[10000001];

int main() {
    scanf("%s", str);
    int n = strlen(str);

    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        int digit = str[i] - 97;
        freq[digit] += 1;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            char ch = i + 97;
            printf("%c : %d\n", ch, freq[i]);
        }
    }
    return 0;
}
