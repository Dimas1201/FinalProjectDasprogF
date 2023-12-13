#include <stdio.h>
#include <string.h>

void removeSubstring(char *s, const char *t) {
    int n = strlen(s);
    int m = strlen(t);

    for (int i = 0; i <= n - m; ) {
        if (strncmp(s + i, t, m) == 0) {
            // Jika substring ditemukan, hapus substring tersebut
            memmove(s + i, s + i + m, n - i - m + 1);
            n = n - m;
        } else {
            // Lanjut ke indeks berikutnya
            i++;
        }
    }
}

int main() {
    // Membaca input string S1, S2, S3, dan S4
    char S1[101], S2[101], S3[101], S4[101];
    scanf("%s %s %s %s", S1, S2, S3, S4);

    // Buang string S2 yang ditemukan pada string S1
    removeSubstring(S1, S2);

    // Cari posisi string S3 pada string S1
    char *pos = strstr(S1, S3);

    // Sisipkan string S4 pada posisi setelah string S3
    if (pos != NULL) {
        int index = pos - S1 + strlen(S3);
        memmove(S1 + index + strlen(S4), S1 + index, strlen(S1) - index + 1);
        strncpy(S1 + index, S4, strlen(S4));
    }

    // Menampilkan string hasil akhir
    printf("%s\n", S1);

    return 0;
}
