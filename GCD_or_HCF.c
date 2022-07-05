#include<stdio.h>
int gcd(int m, int n){
    while(n != 0){
        if(m > n){
            int temp = m;
            m = n;
            n = temp;
        }
        n = n % m;
    }
    return m;
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int res = gcd(m, n);
    printf("%d", res);
}