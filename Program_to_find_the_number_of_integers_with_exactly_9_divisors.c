#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int numCount = 0, i,j;
    for(i = 1; i <= n; i++){
    	int count = 0;
        for(j = 1; j <= n; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 9){
            printf("%d ", i);
            numCount++;
        }
    }
    printf("
Total=%d", numCount);
}