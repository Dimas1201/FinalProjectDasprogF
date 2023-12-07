#include <stdio.h>

int main() {
    int N, arr[105];
    int count = 0;

    // Membaca bilangan-bilangan sampai EOF (End of File)
    while (scanf("%d", &arr[count]) != EOF) {
        count++;
    }

    // Mencetak bilangan-bilangan dalam urutan terbalik
    for (int i = count - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
