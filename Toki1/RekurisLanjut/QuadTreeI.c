#include <stdio.h>
#include <string.h>

#define MAX_SIZE 128

int m[MAX_SIZE][MAX_SIZE];
int nKuadran;
char kuadran[MAX_SIZE * MAX_SIZE][32];

// Cek apakah submatrix [r, c, r+k-1, c+k-1] sudah homogen
int homogen(int r, int c, int k) {
    int val = m[r][c];
    for (int i = r; i < r + k; i++) {
        for (int j = c; j < c + k; j++) {
            if (m[i][j] != val) {
                return 0;
            }
        }
    }
    return 1;
}

// Kodekan submatrix [r, c, r+k-1, c+k-1]

void quadtree(int r, int c, int size, char s[]) {
    if (homogen(r, c, size)) {
        if (m[r][c]) {
            strcat(kuadran[nKuadran], "1");
            strcat(kuadran[nKuadran], s);
            nKuadran++;
        }
        return;
    }

    char temp[32];
    for (int i = 0; i < 4; i++) {
        strcpy(temp, s);
        char digit[2] = {'0' + i, '\0'};
        strcat(temp, digit);
        quadtree(r + (i / 2) * (size / 2), c + (i % 2) * (size / 2), size / 2, temp);
    }
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    // Cari 2^p yang >= max(r, c)
    int maxRc = (r > c) ? r : c;
    int pow2 = 1;
    while (pow2 < maxRc) {
        pow2 *= 2;
    }

    // Inisialisasi
    for (int i = 0; i < pow2; i++) {
        for (int j = 0; j < pow2; j++) {
            m[i][j] = 0;
        }
    }

    // Baca masukan
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // Kodekan
    nKuadran = 0;
    char s[32] = "";
    quadtree(0, 0, pow2, s);

    // Cetak
    printf("%d\n", nKuadran);
    for (int i = 0; i < nKuadran; i++) {
        printf("%s\n", kuadran[i]);
    }

    return 0;
}
