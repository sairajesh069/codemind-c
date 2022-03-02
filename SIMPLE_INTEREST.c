#include<stdio.h>
int main()
{
    int P,T,R,simpleInterest;
    scanf("%d %d %d",&P, &T, &R);
    simpleInterest = (P * T * R) / 100;
    printf("%d", simpleInterest);
}