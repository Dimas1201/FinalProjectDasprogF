#include <stdio.h>

int main() {
    int N, M, P;
    scanf("%d %d %d", &N, &M, &P);

    int matriksA[100][100];
    int matriksB[100][100];
    int matriksC[100][100];

    // Membaca matriks A
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }

    // Membaca matriks B
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }

    // Menghitung matriks C = A * B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            matriksC[i][j] = 0;
            for (int k = 0; k < M; k++) {
                matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    // Mencetak matriks hasil
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d", matriksC[i][j]);
            if (j < P - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}
