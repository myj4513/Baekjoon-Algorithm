#include <iostream>

int a[7];

void go(int n, int m, int selected) {
	if (selected == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", a[i]);
		}printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		a[selected] = i + 1;
		go(n, m, selected + 1);
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	go(n, m, 0);

	return 0;
}