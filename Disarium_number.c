#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int length = (int)log10(n)+1;
    int sum = 0;
    int temp = n;
    while(temp != 0){
        int rem = temp % 10;
        sum += pow(rem, length);
        length--;
        temp = temp / 10;
    }
    if(sum == n){
        printf("True");
    }
    else{
        printf("False");
    }
}