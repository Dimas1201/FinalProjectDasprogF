#include <stdio.h>

typedef struct {
    int id;
    char name[101];
    int price;
    int quality;
} Item;

void findBestItem(Item items[], int n) {
    // Inisialisasi item terbaik untuk harga dan kualitas
    Item bestPriceItem = items[0];
    Item bestQualityItem = items[0];

    for (int i = 1; i < n; i++) {
        // Bandingkan harga
        if (items[i].price < bestPriceItem.price) {
            bestPriceItem = items[i];
        } else if (items[i].price == bestPriceItem.price) {
            // Jika harga sama, bandingkan ID
            if (items[i].id < bestPriceItem.id) {
                bestPriceItem = items[i];
            }
        }

        // Bandingkan kualitas
        if (items[i].quality > bestQualityItem.quality) {
            bestQualityItem = items[i];
        } else if (items[i].quality == bestQualityItem.quality) {
            // Jika kualitas sama, bandingkan ID
            if (items[i].id < bestQualityItem.id) {
                bestQualityItem = items[i];
            }
        }
    }

    // Menampilkan hasil
    printf("Best item for price is: %d %s %d %d\n", bestPriceItem.id, bestPriceItem.name, bestPriceItem.price, bestPriceItem.quality);
    printf("Best item for quality is : %d %s %d %d\n", bestQualityItem.id, bestQualityItem.name, bestQualityItem.price, bestQualityItem.quality);
}

int main() {
    int N;
    scanf("%d", &N);

    Item items[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %d %d", &items[i].id, items[i].name, &items[i].price, &items[i].quality);
    }

    findBestItem(items, N);

    return 0;
}
