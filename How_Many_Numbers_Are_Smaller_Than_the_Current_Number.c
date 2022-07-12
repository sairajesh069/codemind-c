#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int arr1[n];
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i != j && arr[i] > arr[j]){
                count++;
            }
        }
        arr1[i] = count;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr1[i]);
    }
}