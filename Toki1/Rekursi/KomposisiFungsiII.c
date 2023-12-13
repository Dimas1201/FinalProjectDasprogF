#include <stdio.h>
#include <stdlib.h>

// Fungsi rekursif untuk menghitung f(f(...f(x)...))
int recursiveFunction(int A, int B, int K, int x) {
    if (K == 0) {
        return x;
    }

    // Hitung f(f(...f(x)...)) dengan rekursi
    int result = recursiveFunction(A, B, K - 1, x);
    return abs(A * result + B);
}

int main() {
    // Membaca input
    int A, B, K, x;
    scanf("%d %d %d %d", &A, &B, &K, &x);

    // Menghitung dan menampilkan hasil
    int result = recursiveFunction(A, B, K, x);
    printf("%d\n", result);

    return 0;
}
