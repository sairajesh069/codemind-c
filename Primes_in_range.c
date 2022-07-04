#include<stdio.h>
#include<math.h>
int main()
{
    int m, n;
    scanf("%d
%d", &m, &n);
    int primeCount = 0;
    for(int i = m; i <= n; i++){
        if(i == 1){
            continue;
        }
        else{
            int count = 0;
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    count++;
                }
                if(count > 1){
                    break;
                }
            }
            if(count == 0){
                primeCount++;
            }
        }
    }
    printf("%d", primeCount);
}