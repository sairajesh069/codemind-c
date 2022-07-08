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
    int n1, n2;
    scanf("%d
%d", &n1, &n2);
    int sum = n1 + n2;
    int i = 1;
    int count = 1;
    while(1){
        sum += i;
        if(prime(sum) == 1){
            break;
        }
        else{
            count += 1;
            continue;
        }
    }
    printf("%d", count);
}