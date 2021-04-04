#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	if (prev_permutation(a.begin(), a.end())) {
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
	}
	else {
		printf("-1");
	}
	return 0;
}