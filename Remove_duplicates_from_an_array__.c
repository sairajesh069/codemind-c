#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && arr[j] == arr[i]){
                arr[j] = -1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] != -1){
            printf("%d ", arr[i]);
        }
    }
}