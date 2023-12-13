#include <stdio.h>
int main () {
	int jumlah =0;
	int N, B, i;

	scanf("%d",&N);
	for(i=0;i<N;i++) {
		scanf("%d",&B);
		jumlah+=B;
	}
	printf("%d\n",jumlah);
}
