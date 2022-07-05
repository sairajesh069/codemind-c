#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int n1 = 0;
    int n2 = 1;
    int n3;
    while(1){
        n3 = n1 + n2;
        int temp = n2;
        n2 = n3;
        n1 = temp;
        if(n3 == n){
            printf("True");
            break;
        }
        else if(n3 > n){
            printf("False");
            break;
        }
        else{
            continue;
        }
    }
}