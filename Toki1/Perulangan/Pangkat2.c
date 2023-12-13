#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);
    while(N%2 == 0){
        N/=2;
    }
    if (N == 1){
        printf("ya");
    }
    else {
        printf("bukan");
    }
}
