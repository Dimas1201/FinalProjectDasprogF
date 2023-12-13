#include <stdio.h>
#include <math.h>

double calcCos(int a, int b, int c) {
    return (a * a + b * b - c * c) / (2.0 * a * b);
}

int main() {
    long long T;
    scanf("%lld", &T);

    while (T--) {
        int AB, BC, AC, AD, BD, CD;
        double c1, c2, c3, volSQ, vol;

        scanf("%d %d %d %d %d %d", &AB, &AC, &AD, &BC, &BD, &CD);

        c1 = calcCos(AD, BD, AB);
        c2 = calcCos(BD, CD, BC);
        c3 = calcCos(CD, AD, AC);

        volSQ = sqrt(1 + 2 * c1 * c2 * c3 - c1 * c1 - c2 * c2 - c3 * c3);
        vol = (AD * BD * CD * volSQ) / 6.0;

        printf("%.4lf\n", vol);
    }
    return 0;
}
