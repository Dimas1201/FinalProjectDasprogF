#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Fungsi rekursif untuk menentukan apakah sebuah kata palindrom
bool isPalindrome(char *S, int start, int end) {
    // Kasus dasar: jika panjang substring kurang dari atau sama dengan 1, itu palindrom
    if (start >= end) {
        return true;
    }

    // Jika huruf terdepan dan terbelakang berbeda, bukan palindrom
    if (S[start] != S[end]) {
        return false;
    }

    // Panggil fungsi rekursif untuk substring yang lebih pendek
    return isPalindrome(S, start + 1, end - 1);
}

int main() {
    // Membaca input string S
    char S[101];
    scanf("%s", S);

    // Menghitung panjang string
    int length = strlen(S);

    // Memanggil fungsi rekursif untuk menentukan palindrom atau tidak
    if (isPalindrome(S, 0, length - 1)) {
        printf("YA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
