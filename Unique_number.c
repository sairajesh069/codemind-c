#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int len = (int)log10(n)+1;
	int arr[len];
	for(int i = len-1; i >= 0; i--){
		int rem = n%10;
		arr[i] = rem;
		n /= 10;
	}
	int dupLen = len;
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			if(i != j && arr[i] == arr[j]){
				dupLen--;
			}
		}
	}
	if(dupLen == len){
		printf("Unique Number");
	}
	else{
		printf("Not Unique Number");
	}
}