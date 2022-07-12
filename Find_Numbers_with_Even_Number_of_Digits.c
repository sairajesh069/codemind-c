#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int count;
    for(int i = 0; i < n; i++){
        int len = (int)log10(arr[i])+1;
        if(len % 2 == 0){
            count++;
        }
    }
    printf("%d ", count);
}