#include<stdio.h>
#include<math.h>
int prime(int n){
    int count = 0;
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        {
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
int main()
{
    int n;
    scanf("%d", &n);
    int res = prime(n);
    if(res == 1){
        printf("-1");
    }
    else{
        int a = 0;
        int b = 0;
        int i;
        for(i = 2; i <= (int)n/2; i++){
            if(n % i == 0 && prime(n/i) == 1){
                a = i;
                b = n/i;
                break;
            }
            else{
                continue;
            }
        }
        if(a == 0 || b == 0){
            printf("-1");
        }
        printf("%d %d", a, b);
    }
}