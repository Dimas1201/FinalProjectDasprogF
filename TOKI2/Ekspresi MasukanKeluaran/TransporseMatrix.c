#include <stdio.h>

int main() {
    int matrix[3][3];

    // Membaca matriks A
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Menghitung transpos
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
