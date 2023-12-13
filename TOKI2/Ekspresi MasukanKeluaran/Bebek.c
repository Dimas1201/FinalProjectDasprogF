#include <stdio.h>

int main() {
    int N, M;

    // Membaca input jumlah bebek dan jumlah teman
    scanf("%d %d", &N, &M);

    // Menghitung pembagian dan sisa
    int masing_masing = N / M;
    int bersisa = N % M;

    // Menampilkan hasil pembagian dan sisa
    printf("masing-masing %d\n", masing_masing);
    printf("bersisa %d\n", bersisa);

    return 0;
}
