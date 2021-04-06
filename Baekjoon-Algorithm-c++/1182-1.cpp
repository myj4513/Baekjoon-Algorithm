#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, s;
	scanf("%d %d", &n, &s);
	vector<int> a(n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < (1 << n); i++) {
		int sum = 0;
		for (int k = 0; k < n; k++) {
			if (i & (1 << k)) {
				sum += a[k];
			}
		}
		if (sum == s) ans++;
	}
	printf("%d", ans);
	return 0;
}
