#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int n1 = 0;
    int n2 = 1;
    printf("%d %d ", n1, n2);
    for(int i = 3; i <= n; i++){
        int n3 = n1 + n2;
        printf("%d ", n3);
        int temp = n2;
        n2 = n3;
        n1 = temp;
    }
}