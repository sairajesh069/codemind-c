#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int c[n];
    for(int i = 0; i < n; i++){
        c[i] = a[i]+b[i];
    }
    for(int i = 0; i < n; i++){
        printf("%d ", c[i]);
    }
}