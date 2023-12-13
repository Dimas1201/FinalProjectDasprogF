#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int bilangan;
    int bilanganTerbesar = -100001; // Inisialisasi dengan nilai terkecil yang mungkin
    int bilanganTerkecil = 100001; // Inisialisasi dengan nilai terbesar yang mungkin

    for (int i = 0; i < N; i++) {
        scanf("%d", &bilangan);

        // Cari bilangan terbesar
        if (bilangan > bilanganTerbesar) {
            bilanganTerbesar = bilangan;
        }

        // Cari bilangan terkecil
        if (bilangan < bilanganTerkecil) {
            bilanganTerkecil = bilangan;
        }
    }

    printf("%d %d\n", bilanganTerbesar, bilanganTerkecil);

    return 0;
}
