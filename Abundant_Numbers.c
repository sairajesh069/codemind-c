#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= int(n/2); i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum > n){
        printf("True");
    }
    else{
        printf("False");
    }
}