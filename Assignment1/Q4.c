#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

bool funct(int n) {
    int prev = -1;

    while (n > 0) {
        int curr = n % 10;
        if (prev != -1 && abs(prev - curr) != 1) {
            return false;
        }
        prev = curr;
        n /= 10;
    }
    return true;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (funct(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}