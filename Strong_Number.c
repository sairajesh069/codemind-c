#include<stdio.h>
int factorial(int n)
{
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    while(temp != 0){
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(sum == n){
        printf("The number %d is a strong number", n);
    }
    else{
        printf("The number %d is not a strong number", n);
    }
}