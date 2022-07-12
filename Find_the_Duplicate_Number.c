#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int repeatingElement;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                count++;
            }
        }
        if(count > 0){
            repeatingElement = arr[i];
            break;
        }
    }
    printf("%d", repeatingElement);
}