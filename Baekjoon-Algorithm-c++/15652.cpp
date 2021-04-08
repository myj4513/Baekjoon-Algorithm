#include <iostream>

using namespace std;

int a[8];

void go(int n, int m, int index, int start) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", a[i]);
		}printf("\n");
		return;
	}
	for (int i = start; i < n; i++) {
		a[index] = i + 1;
		go(n, m, index + 1, i);
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	go(n, m, 0, 0);
	return 0;
}