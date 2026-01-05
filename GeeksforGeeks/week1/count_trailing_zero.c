#include <stdio.h>

int countZero(int n){
    int res = 0;
    for(int i=5;i<=n;i=i*5)
    res = res + n/i;
    return res;
}
int main () {
   printf("%d",countZero(100)) ;

    return 0;
}
//efficient method