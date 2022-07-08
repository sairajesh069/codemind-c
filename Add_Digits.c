#include<stdio.h>
#include<math.h>
int digitSum(int n)
{
    int sum = 0;
    while(n != 0){
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum = digitSum(n);
    int len = (int)log10(sum)+1;
    if(len == 1){
        printf("%d", sum);
    }
    else{
        while(len > 1){
            sum = digitSum(sum);
            len = (int)log10(sum)+1;
        }
        printf("%d", sum);
    }
}