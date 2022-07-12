#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int product[n];
    for(int i = 0; i < n; i++){
        product[i] = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                product[i] *= arr[j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", product[i]);
    }
}