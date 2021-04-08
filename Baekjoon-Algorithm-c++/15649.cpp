#include <iostream>

using namespace std;

int a[8];
bool c[8];

void go(int m, int n, int index) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		if (c[i]) continue;
		c[i] = true;
		a[index] = i + 1;
		go(m, n, index + 1);
		c[i] = false;
	}
}

int main(void) {
	int m, n;
	scanf("%d %d", &n, &m);

	go(m, n, 0);
	return 0;

}