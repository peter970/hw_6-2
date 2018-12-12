#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[12] = { 0 }, i, j, k, l, b, c;
	srand(time(NULL));
	for (i = 0; i < 36000; i++) {
		k = (rand() % 6) + 1;
		l = (rand() % 6) + 1;
		b = k + l ;
		if (b > 2)
			b--;
		a[b]++;
	}
	for (i = 0; i < 12; i++) {
		printf("%dÂI \t %d¦¸\n",i+1, a[i]);
	}
	system("pause");
	return 0;
}