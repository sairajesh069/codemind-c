#include<stdio.h>
int main()
{
    int number,rem,sum,product,i;
    scanf("%d", &number);
    i = 0;
    sum = 0;
    product = 1;
    while(number != 0){
        rem = number % 10;
        sum = sum + rem;
        product = product * rem;
        number = number / 10;
    }
    if(sum == product){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}