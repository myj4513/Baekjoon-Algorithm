#include <iostream>
#include <algorithm>

using namespace std;

int a[8];
int b[8];
void go(int n, int m, int index, int start) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i < n; i++) {
		b[index] = a[i];
		go(n, m, index + 1, i);
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);

	go(n, m, 0, 0);
	return 0;
}