#include <stdio.h>
#include <math.h>

int checkPrime(long long N) {
    long long sqrtN = sqrt(N);
    if (N < 2)
        return 0;
    for (long long i = 2; i <= sqrtN; i++) {
        if (N % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    long long T;
    scanf("%lld", &T);

    while (T--) {
        long long start, end;
        scanf("%lld %lld", &start, &end);

        for (long long i = start; i <= end; i++) {
            if (checkPrime(i))
                printf("%lld\n", i);
        }
        printf("\n");
    }

    return 0;
}
