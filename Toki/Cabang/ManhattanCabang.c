#include <stdio.h>
#include <math.h>
/*/
Library <math.h> dalam bahasa C mengandung berbagai fungsi matematika dan konstanta yang dapat digunakan dalam pemrograman untuk melakukan operasi matematika yang berbeda. Di bawah ini adalah beberapa fungsi dan konstanta yang umumnya terkandung dalam library <math.h>:

Fungsi Matematika:

sqrt(x): Menghitung akar kuadrat dari x.
pow(x, y): Menghitung x pangkat y.
exp(x): Menghitung eksponensial dari x.
log(x): Menghitung logaritma natural dari x.
log10(x): Menghitung logaritma basis 10 dari x.
sin(x), cos(x), tan(x): Menghitung nilai trigonometri sinus, kosinus, dan tangen dari sudut x dalam radian.
asin(x), acos(x), atan(x): Menghitung nilai arcsinus, arccosinus, dan arktangen dari x.
fabs(x): Menghitung nilai absolut dari x.
ceil(x): Mengembalikan bilangan bulat terkecil yang lebih besar atau sama dengan x (pembulatan ke atas).
floor(x): Mengembalikan bilangan bulat terbesar yang lebih kecil atau sama dengan x (pembulatan ke bawah).
Konstanta:

M_PI: Konstanta yang merepresentasikan nilai π (pi).
M_E: Konstanta yang merepresentasikan bilangan e (euler).
Selain fungsi-fungsi dan konstanta-konstanta di atas, library <math.h> juga bisa mengandung beberapa fungsi matematika tambahan yang bervariasi tergantung pada implementasi bahasa C yang digunakan. Anda dapat merujuk ke dokumentasi bahasa C yang Anda gunakan untuk informasi lebih lanjut tentang fungsi-fungsi yang tersedia dalam library <math.h> pada platform atau kompiler tertentu.*/

int main () {
	int x1, y1, x2, y2, jarak;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	printf("%d\n",abs(x1-x2)+abs(y1-y2));
}
