#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matriks[100][100];

    // Membaca matriks
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    // Mencetak matriks yang sudah diputar
    for (int j = 0; j < M; j++) {
        for (int i = N - 1; i >= 0; i--) {
            printf("%d", matriks[i][j]);
            if (i > 0) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}
