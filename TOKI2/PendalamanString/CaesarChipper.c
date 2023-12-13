#include <stdio.h>
#include <string.h>

void caesarCipher(char *s, int k) {
    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            // Enkripsi hanya karakter alfabet 'a' - 'z'
            s[i] = 'a' + (s[i] - 'a' + k) % 26;
        }
    }
}

int main() {
    // Membaca input string S
    char S[101];
    scanf("%s", S);

    // Membaca input bilangan bulat K
    int K;
    scanf("%d", &K);

    // Proses enkripsi Caesar Cipher
    caesarCipher(S, K);

    // Menampilkan string S yang telah dienkripsi
    printf("%s\n", S);

    return 0;
}
