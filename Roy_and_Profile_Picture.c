#include<stdio.h>
#include<math.h>
int main()
{
    int l, n;
    scanf("%d
%d
", &l, &n);
    int w, h;
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &w, &h);
        if(w < l || h < l){
            printf("UPLOAD ANOTHER
");
        }
        else{
            if(sqrt(w*h) == w){
                printf("ACCEPTED
");
            }
            else{
                printf("CROP IT
");
            }
        }
    }
}