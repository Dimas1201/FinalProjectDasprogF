#include <stdio.h>

#define MAX_N 9

int N, K;
int currentCombination[MAX_N + 1];

void printCombinations(int depth, int start) {
    if (depth >= K) {
        // Print the combination
        for (int i = 0; i < K; i++) {
            printf("%d ", currentCombination[i]);
        }
        printf("\n");
    } else {
        // Generate combinations using backtracking
        for (int i = start; i <= N; i++) {
            currentCombination[depth] = i;
            printCombinations(depth + 1, i + 1);
        }
    }
}

int main() {
    // Read input N and K
    scanf("%d %d", &N, &K);

    // Call the function to print combinations
    printCombinations(0, 1);

    return 0;
}
