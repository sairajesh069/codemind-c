#include<stdio.h>
#include<math.h>
int main()
{
    int start, end;
    scanf("%d
%d", &start, &end);
    for(int i = start; i <= end; i++){
        if(i == 1){
            continue;
        }
        else if(i == 2){
            printf("%d
", i);
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
                printf("%d
", i);
            }
            else{
                continue;
            }
        }
    }
}