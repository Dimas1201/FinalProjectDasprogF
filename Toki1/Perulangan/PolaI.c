#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        if (i % K == 0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
