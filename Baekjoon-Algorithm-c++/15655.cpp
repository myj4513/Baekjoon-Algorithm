#include <iostream>
#include <algorithm>
using namespace std;

int a[8];
bool c[8];

void go(int n, int m, int index, int selected, int start) {
	if (selected == m) {
		for (int i = 0; i < n; i++) {
			if (c[i]) {
				printf("%d ", a[i]);
			}
		}
		printf("\n");
		return;
	}
	for (int i = start; i < n; i++) {
		if (c[i]) continue;
		c[i] = true;
		go(n, m, index + 1, selected + 1, i+1);
		c[i] = false;
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	go(n, m, 0, 0, 0);
	return 0;
}