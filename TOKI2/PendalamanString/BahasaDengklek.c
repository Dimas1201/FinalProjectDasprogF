#include <stdio.h>
#include <string.h>

int main() {
    // Membaca input string S
    char S[101];
    scanf("%s", S);

    // Mengubah huruf besar menjadi huruf kecil dan sebaliknya
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 'a' + 'A';
        } else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] - 'A' + 'a';
        }
    }

    // Menampilkan string S yang telah diubah
    printf("%s\n", S);

    return 0;
}
