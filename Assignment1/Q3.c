#include <stdio.h>
#include <stdbool.h>
bool funct(int n) {
    int temp = n;
    while (n > 0) {
        int dig = n % 10;
        if (dig == 0 || temp % dig != 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n, m;
    
    printf("Enter lower bound: ");
    scanf("%d", &n);
    printf("Enter upper bound: ");
    scanf("%d", &m);
    for (int i = n; i <= m; i++) {
        if (funct(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}