#include<stdio.h>
#include<math.h>
int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    int len = (int)log10(x)+1;
    int lastDigit = 0;
    int firstDigit = 0;
    int arr[len];
    for(int i = len-1; i >= 0; i--){
    	int rem = x % 10;
    	arr[i] = rem;
    	x /= 10;
    }
    for(int i = 0; i < n; i++){
        firstDigit = firstDigit*10 + arr[i];
    }
    for(int i = len-n; i < len; i++){
        lastDigit = lastDigit*10 + arr[i];
    }
    int absDifference = abs(firstDigit - lastDigit);
    printf("%d", absDifference);
}