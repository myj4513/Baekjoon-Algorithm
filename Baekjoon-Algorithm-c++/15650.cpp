#include <iostream>

using namespace std;

int a[8];

void go(int m, int n, int index, int start) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i < n; i++) {
		a[index] = i + 1;
		go(m, n, index + 1, i+1);
	}
}

int main(void) {
	int m, n;
	scanf("%d %d", &n, &m);

	go(m, n, 0, 0);
	return 0;

}