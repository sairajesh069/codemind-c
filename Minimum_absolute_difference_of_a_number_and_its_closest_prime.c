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
    if(prime(n) == 1){
        printf("0");
    }
    else{
        int previousPrime = n - 1;
        while(previousPrime != 0){
    		if(prime(previousPrime) == 1){
    			break;
    		}
    		else{
    			previousPrime--;
    		}
        }
        int nextPrime = n + 1;
        while(nextPrime != 0){
    		if(prime(nextPrime) == 1){
    			break;
    		}
    		else{
    			nextPrime++;
    		}
        }
        if((n - previousPrime) > (nextPrime - n)){
    		printf("%d", nextPrime-n);
        }
        else{
            printf("%d", n-previousPrime);
        }
    }
}