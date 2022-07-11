#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int res = 1;
    if(res >= n){
        printf("%d", res);
    }
    else{
        int previous, next;
        while(1){
            previous = res;
            res *= 2;
            next = res;
            if(res >= n){
                break;
            }
        }
        if(n-previous < next-n){
            printf("%d", n-previous);
        }
        else{
            printf("%d", next-n);
        }
    }
}