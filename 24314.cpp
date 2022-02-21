#include <iostream>
int main() {
	int a1, a0;
	scanf("%d %d", &a1, &a0);
	int c;
	scanf("%d", &c);
	int n0;
	scanf("%d", &n0);
	for (int i = n0; i < 10000; i++) {
		if (c * i > a1 * i + a0) {
			printf("0\n");
			return 0;
		}
	}
	printf("1\n");
}