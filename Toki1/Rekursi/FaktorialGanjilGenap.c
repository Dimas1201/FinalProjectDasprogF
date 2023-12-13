#include <stdio.h>

// Fungsi untuk menghitung faktorial ganjil-genap
int factorialOddEven(int N) {
    if (N <= 1) {
        return N;
    }

    if (N % 2 == 0) {
        return (N / 2) * factorialOddEven(N - 1);
    } else {
        return N * factorialOddEven(N - 1);
    }
}

int main() {
    // Membaca input bilangan bulat N
    int N;
    scanf("%d", &N);

    // Menghitung dan menampilkan N!!
    int result = factorialOddEven(N);
    printf("%d\n", result);

    return 0;
}
