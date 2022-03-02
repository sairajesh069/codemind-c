#include<stdio.h>
int main()
{
    int a,b;
    float avg;
    scanf("%d %d", &a, &b);
    avg = (a + b) * 0.5;
    printf("%.4f",avg);
}