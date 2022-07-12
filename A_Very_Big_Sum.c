#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%ld", &arr[i]);
    }
    long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("%ld", sum);
}