#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int pairCount = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] != 0 && arr[i]==arr[j]){
                pairCount += 1;
                arr[i] = 0;
                arr[j] = 0;
                break;
            }
            else{
                continue;
            }
        }
    }
    printf("%d", pairCount);
}