#include <stdio.h>
#include <stdbool.h>

#define MAX_N 9

int N;
int currentPermutation[MAX_N + 1];
bool visited[MAX_N + 1];

void printPermutations(int depth) {
    if (depth >= N) {
        // Check if the current permutation satisfies the zig-zag rule
        int zigZag = 1;
        for (int i = 2; i <= N - 1; i++) {
            if (!((currentPermutation[i] > currentPermutation[i - 1] && currentPermutation[i] > currentPermutation[i + 1]) ||
                  (currentPermutation[i] < currentPermutation[i - 1] && currentPermutation[i] < currentPermutation[i + 1]))) {
                zigZag = 0;
                break;
            }
        }

        // Print the permutation if it satisfies the zig-zag rule
        if (zigZag) {
            for (int i = 1; i <= N; i++) {
                printf("%d", currentPermutation[i]);
            }
            printf("\n");
        }
    } else {
        // Generate permutations using backtracking
        for (int i = 1; i <= N; i++) {
            if (!visited[i]) {
                visited[i] = true;
                currentPermutation[depth + 1] = i;
                printPermutations(depth + 1);
                visited[i] = false;
            }
        }
    }
}

int main() {
    // Read input N
    scanf("%d", &N);

    // Initialize arrays
    for (int i = 1; i <= N; i++) {
        visited[i] = false;
    }

    // Call the function to print permutations
    printPermutations(0);

    return 0;
}
