#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int digit = n % 10;
    for(int i=1;i<=digit;i++){
        printf("%d",digit);
    }
    return 0;
}
