#include<stdio.h>
int main()
{
    int tempF;
    float tempC;
    scanf("%d",&tempF);
    tempC = tempF - 32;
    tempC = tempC * 100;
    tempC = tempC / 180;
    printf("%.2f",tempC);
}