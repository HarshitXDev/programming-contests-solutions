#include <stdio.h>

int last(int n) {
    return n % 10; 
}

int first(int n) {
    while (n >= 10) {
        n /= 10;    
    }
    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    int sum = first(n) + last(n);
    printf("%d\n", sum);
    return 0;
}
 