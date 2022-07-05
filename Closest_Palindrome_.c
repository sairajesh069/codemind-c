#include<stdio.h>
#include<math.h>
int reverse(int n){
	int rev = 0;
	while(n != 0){
		int rem = n % 10;
		rev = rev*10 + rem;
		n /= 10;
	}
	return rev;
}
int main()
{
    int n;
    scanf("%d", &n);
    int leftPalindrome , rightPalindrome;
    for(int i = n-1; i <= n; i--){
		if(i == reverse(i)){
			leftPalindrome = i;
			break;
		}
	}
	for(int i = n+1; i >= n; i++){
		if(i == reverse(i)){
			rightPalindrome = i;
			break;
		}
	}
	int absDifference1 = abs(n -leftPalindrome);
	int absDifference2 = abs(n - rightPalindrome);
	if(absDifference1 < absDifference2){
		printf("%d", leftPalindrome);
	}
	else if(absDifference1 > absDifference2){
		printf("%d", rightPalindrome);
	}
	else{
		printf("%d %d", leftPalindrome, rightPalindrome);
	}
}