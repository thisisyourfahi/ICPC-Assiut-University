#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 1, k = 1; i <= n; i++, k += 2){
        int space = n - i;
        while(space > 0){
            printf(" ");
            space--;
        }

        for(int j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
            loop    star    space
   *        1       1       3
  ***       2       3       2
 *****      3       5       1
*******     4       7       0

*/
