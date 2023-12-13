#include <stdio.h>

int main() {
    int A, T;

    // Membaca input alas dan tinggi
    scanf("%d %d", &A, &T);

    // Menghitung luas segitiga
    double luas = 0.5 * A * T;

    // Menampilkan hasil dengan dua angka di belakang koma
    printf("%.2lf\n", luas);

    return 0;
}
