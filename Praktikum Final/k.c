#include <stdio.h>
#include <string.h>

void encryptPassword(char *password, int K) {
    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            // Menerapkan aturan pergeseran pada huruf kecil
            password[i] = 'a' + (password[i] - 'a' + K) % 26;
        }
    }
}

int main() {
    char password[101];
    int K;

    // Membaca input
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';  // Menghilangkan karakter newline dari string

    scanf("%d", &K);

    // Memanggil fungsi untuk mengenkripsi password
    encryptPassword(password, K);

    // Menampilkan output
    printf("%s\n", password);

    return 0;
}
