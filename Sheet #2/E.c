#include <stdio.h>
int main(){
    int max_value = -1;
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int v;
        scanf("%d", &v);
        if(v > max_value){
            max_value = v;
        }
    }

    printf("%d\n", max_value);
    return 0;
}
