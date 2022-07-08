#include<stdio.h>
int factorial(int n)
{
    if(n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1); 
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        printf("%d
", factorial(n));
    }
}