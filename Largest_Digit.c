#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
    while(n != 0){
        int rem = n % 10;
        if(max < rem){
            max = rem;
        }
        n = n / 10;
    }
    printf("%d", max);
}