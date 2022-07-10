#include<stdio.h>
#include<math.h>
int main()
{
    int start, end;
    scanf("%d\n%d", &start, &end);
    for(int i = start; i <= end; i++){
    	if(i % 10 == 0){
    		continue;
		}
		else{
	        int len = (int)log10(i)+1;
	        int count = 0;
	        int temp = i;
	        while(temp != 0){
	            int rem = temp % 10;
	            if(i % rem == 0){
	                count++;
	            }
	            temp /= 10;
	        }
	        if(count == len){
	            printf("%d ", i);
	        }
	    }
    }
}
