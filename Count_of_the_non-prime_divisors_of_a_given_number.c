#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int count = 0;
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                count++;
            }
            if(count > 1){
                break;
            }
        }
        if(count == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int nonPrimeCount = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && prime(i) == 0){
            nonPrimeCount++;
        }
    }
    printf("%d", nonPrimeCount);
}