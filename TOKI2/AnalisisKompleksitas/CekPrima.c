#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; // Bukan bilangan prima
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Bukan bilangan prima
        }
    }

    return 1; // Bilangan prima
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }

    return 0;
}

