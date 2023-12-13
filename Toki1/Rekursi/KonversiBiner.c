#include <stdio.h>

// Fungsi rekursif untuk mengkonversi desimal ke biner
void decimalToBinary(int N) {
    // Base case: jika N adalah 0, tidak ada operasi lebih lanjut
    if (N == 0) {
        return;
    }

    // Panggil rekursif untuk N/2 dan cetak bit terakhir
    decimalToBinary(N / 2);
    printf("%d", N % 2);
}

int main() {
    // Membaca input bilangan desimal
    int N;
    scanf("%d", &N);

    // Memanggil fungsi rekursif untuk mengkonversi dan menampilkan hasilnya
    decimalToBinary(N);
    printf("\n");

    return 0;
}
