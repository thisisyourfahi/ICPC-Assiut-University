#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int minimumValue = arr[0];
    int minimumIndex = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] < minimumValue){
            minimumValue = arr[i];
            minimumIndex = i + 1;
        }
    }

    printf("%d %d\n", minimumValue, minimumIndex);

    return 0;
}
