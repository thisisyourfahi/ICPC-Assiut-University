#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        bool prime = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                prime = false;
            }
        }

        if(prime){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
