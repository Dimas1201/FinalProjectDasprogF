#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int data[1001] = {0}; // Inisialisasi array untuk menyimpan jumlah kemunculan setiap bilangan
    int maxCount = 0;
    int mode = 0;

    // Membaca dan menghitung kemunculan setiap bilangan
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        data[num]++;

        // Memperbarui modus terbesar jika ditemukan jumlah kemunculan yang lebih besar
        if (data[num] > maxCount) {
            maxCount = data[num];
            mode = num;
        } else if (data[num] == maxCount && num > mode) {
            // Jika terdapat jumlah kemunculan yang sama, tetapi bilangan lebih besar
            mode = num;
        }
    }

    printf("%d\n", mode);

    return 0;
}

