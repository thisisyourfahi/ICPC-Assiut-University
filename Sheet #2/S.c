#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        if(x > y){
            int temp = y;
            y = x;
            x = temp;
        }

        int sum = 0;
        for(int i = x + 1; i < y; i++){
            if(i % 2 == 1){
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
