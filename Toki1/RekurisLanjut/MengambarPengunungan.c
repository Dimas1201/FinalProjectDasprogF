#include <stdio.h>

// Fungsi rekursif untuk menggambar pegunungan
void drawMountain(int N, int level) {
    // Base case: jika level <= 0, tidak ada operasi lebih lanjut
    if (level <= 0) {
        return;
    }

    // Panggil rekursif untuk level - 1 (bagian atas pegunungan)
    drawMountain(N, level - 1);

    // Cetak '*' sebanyak level
    for (int i = 1; i <= level; i++) {
        printf("*");
    }
    printf("\n");

    // Panggil rekursif untuk level - 1 (bagian bawah pegunungan)
    drawMountain(N, level - 1);
}

int main() {
    // Membaca input tingkat pegunungan
    int N;
    scanf("%d", &N);

    // Memanggil fungsi rekursif untuk menggambar pegunungan
    drawMountain(N, N);

    return 0;
}
