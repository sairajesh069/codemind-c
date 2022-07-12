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
    int unqArr[n];
    int k = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 0){
            unqArr[k] = arr[i];
            k++;
        }
    }
    if(k > 0){
        int max = unqArr[0];
        for(int i = 1; i < k; i++){
            if(unqArr[i] > max){
                max = unqArr[i];   
            }
        }
        printf("%d", max);
    }
    else{
        printf("-1");
    }
}