#include <stdio.h>
#include <string.h>

// Fungsi untuk menghapus substring T dari string S
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
    // Membaca input string S dan T
    char S[101], T[101];
    scanf("%s %s", S, T);

    // Proses penghapusan substring T dari string S
    while (strstr(S, T) != NULL) {
        removeSubstring(S, T);
    }

    // Menampilkan string S pada kondisi terakhir
    printf("%s\n", S);

    return 0;
}
