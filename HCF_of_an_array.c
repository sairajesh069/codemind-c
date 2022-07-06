#include<stdio.h>
int gcd(int a, int b)
{
    while(b){
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        if(a == 0){
            return b;
        }
        if(b == 0){
            return a;
        }
        b = b % a;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int res = gcd(arr[0], arr[1]);
    for(int i = 2; i < n; i++){
        res = gcd(res, arr[i]);
    }
    printf("%d", res);
}