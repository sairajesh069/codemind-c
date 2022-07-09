#include<stdio.h>
#include<math.h>
int prime(int n)
{
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        int count = 0;
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
    int len = (int)log10(n)+1;
    int count = 0;
    if(prime(n) == 1){
        while(n != 0){
            int rem = n % 10;
            if(prime(rem) == 1){
                count++;
            }
            n /= 10;
        }
        if(count == len){
            printf("Mega Prime");
        }
        else{
            printf("Not Mega Prime");
        }
    }
    else{
        printf("Not Mega Prime");
    }
}