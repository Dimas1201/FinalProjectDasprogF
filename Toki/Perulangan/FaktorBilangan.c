#include <stdio.h>

int main(){
    int a,i;
    scanf("%d", &a);
    for (i=a;i>=1;i--){
        if(a % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
