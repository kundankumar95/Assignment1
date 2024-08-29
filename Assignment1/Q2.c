#include <stdio.h>
#include <stdbool.h>


void funct(bool arr[]) {
    int MAX = 100;
    for (int i = 2; i <= MAX; i++) arr[i] = true;
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (arr[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                arr[j] = false;
            }
        }
    }
}

int main() {
    bool arr[100];
    funct(arr);

    int T;
    scanf("%d", &T);
    while (T--) {
        int L, R;
        scanf("%d %d", &L, &R);

        int f= -1;
        int l = -1;
        
        for (int i = L; i <= R; i++) {
            if (arr[i]) {
                if (f == -1) {
                    f = i;
                }
                l = i;
            }
        }

        if (f == -1) {
            printf("-1\n");
        } else if (f == l) {
            printf("0\n");
        } else {
            printf("%d\n", l - f);
        }
    }

    return 0;
}
