#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    scanf("%d", &x);

    bool prime = true;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            prime = false;
            break;
        }
    }

    if(prime){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
