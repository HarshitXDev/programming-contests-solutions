#include <stdio.h>
#include <stdlib.h>
int main () {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("lld",&n);
        long long score =0;
        int position = 1;
        while(n>0){
            int digit = n%10;
            if(digit!=0){
                if(position% 2 ==0){
                    score+= digit;
                }else{
                    score-=digit;
                }
                position++;
            }
            n/=10;
        }
        score = llabs(score);
        if(score < 0)
        score = 0;
        printf("%lld\n",score);
    }
    return 0;
}