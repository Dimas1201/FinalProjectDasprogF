#include <stdio.h>

int check(int *p, int n) {
    for (int i = 1; i < n; i++)
        if (*(p + i) != *p)
            return 0;
    return 1;
}

int main() {
    int T, S, C, n, a[100], start[101], sum;

    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        scanf("%d %d", &S, &C);

        for (int i = 0; i < S; i++)
            scanf("%d", &a[i]);
        n = S;

        while (!check(a, n)) {
            start[n] = a[0];
            for (int i = 0; i < n - 1; i++)
                a[i] = a[i + 1] - a[i];
            n--;
        }

        for (int i = n; i < n + C; i++)
            a[i] = a[0];

        for (int i = n; i < S; i++) {
            sum = 0;
            for (int k = 0; k < i + C; k++)
                sum += a[k];
            sum += start[i + 1];

            for (int j = i + C; j >= 0; j--) {
                a[j] = sum;
                if (j > 0)
                    sum -= a[j - 1];
            }
        }

        for (int i = S; i < S + C; i++) {
            if (i > S)
                printf(" ");
            printf("%d", a[i]);
        }

        printf("\n");
    }

    return 0;
}
