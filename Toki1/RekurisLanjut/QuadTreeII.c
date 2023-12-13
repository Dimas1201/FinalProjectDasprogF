#include <stdio.h>
#include <string.h>

#define MAX_SIZE 128

int matrix[MAX_SIZE][MAX_SIZE];
int r, c, n;
char code[128*128][12];

int ispowertwo(int n) {
    return n == 2 || n == 4 || n == 8 || n == 16 || n == 32 || n == 64 || n == 128;
}

void changeto1(int r, int c, int size, char* kode) {
    if (strlen(kode) == 0) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                matrix[r + i][c + j] = 1;
        }
        return;
    }
    if (strlen(kode) == 1) {
        if (kode[0] == '0') {
            for (int i = 0; i < size / 2; i++) {
                for (int j = 0; j < size / 2; j++)
                    matrix[r + i][c + j] = 1;
            }
        } else if (kode[0] == '1') {
            for (int i = 0; i < size / 2; i++) {
                for (int j = size / 2; j < size; j++)
                    matrix[r + i][c + j] = 1;
            }
        } else if (kode[0] == '2') {
            for (int i = size / 2; i < size; i++) {
                for (int j = 0; j < size / 2; j++)
                    matrix[r + i][c + j] = 1;
            }
        } else {
            for (int i = size / 2; i < size; i++) {
                for (int j = size / 2; j < size; j++)
                    matrix[r + i][c + j] = 1;
            }
        }
    } else {
        char pos = kode[0];
        memmove(kode, kode + 1, strlen(kode));
        if (pos == '0') changeto1(r, c, size / 2, kode);
        else if (pos == '1') changeto1(r, c + size / 2, size / 2, kode);
        else if (pos == '2') changeto1(r + size / 2, c, size / 2, kode);
        else changeto1(r + size / 2, c + size / 2, size / 2, kode);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", code[i]);
    scanf("%d %d", &r, &c);

    int rtemp = r, ctemp = c;
    if (!(ispowertwo(r) && ispowertwo(c))) {
        while (!ispowertwo(rtemp)) rtemp++;
        while (!ispowertwo(ctemp)) ctemp++;
    }
    rtemp = (ctemp > rtemp) ? ctemp : rtemp;
    ctemp = rtemp;

    for (int i = 0; i < rtemp; i++) {
        for (int j = 0; j < ctemp; j++)
            matrix[i][j] = 0;
    }

    if (n != 0) {
        for (int i = 0; i < n; i++) {
            memmove(code[i], code[i] + 1, strlen(code[i]));
            changeto1(0, 0, rtemp, code[i]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d", matrix[i][j]);
            if (j == c - 1) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}
