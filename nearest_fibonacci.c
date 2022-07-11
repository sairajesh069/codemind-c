#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int n1 = 0;
    int n2 = 1;
    int n3 = n1 + n2;
    if(n3 >= n){
        printf("%d", n3);
    }
    else{
        int previous, next;
        while(n3 < n){
            previous = n3;
            int temp = n2;
            n2 = n3;
            n1 = temp;
            n3 = n1 + n2;
            next = n3;
        }
        if(n-previous < next-n){
            printf("%d", previous);
        }
        else if(n-previous > next-n){
            printf("%d", next);
        }
        else{
            printf("%d %d", previous, next);
        }
    }
}