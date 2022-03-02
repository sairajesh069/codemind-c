#include<stdio.h>
int main()
{
    int l,b,w,c,result;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    result = (l-(2*w)) * (b-(2*w));
    result = (l*b) - result;
    result = result * c;
    if((l-(2*w)<=0) || (b-(2*w)<=0)){
        printf("Impossible");
    }
    else{
        printf("%d",result);
    }
}