#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int evenCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        } 
    }
    int oddCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            oddCount++;
        }
    }
    printf("%d %d", evenCount, oddCount);
}