#include<stdio.h>
long int gcd(long int a, long int b)
{
    while(b){
        if(a > b){
            long int temp = a;
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
    long int lcm = arr[0];
    for(int i = 1; i < n; i++){
        lcm = (arr[i]*lcm) / gcd(arr[i], lcm);
    }
    printf("%ld", lcm);
}