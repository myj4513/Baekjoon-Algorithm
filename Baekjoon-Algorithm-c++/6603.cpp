#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int k;
	while (1) {
		scanf("%d", &k);
		if (k == 0) break;
		vector<int> a(k);
		vector<int> b(k, 1);
		for (int i = 0; i < k; i++) scanf("%d", &a[i]);
		for (int i = 0; i < 6; i++) b[i] = 0;
		do {
			for (int i = 0; i < k; i++) {
				if (b[i] == 0) {
					printf("%d ", a[i]);
				}
			}printf("\n");
		} while (next_permutation(b.begin(), b.end()));
		printf("\n");
	}
	return 0;
}