#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void lottery(vector<int> &a, int i, vector<int> b) {
	if (b.size() == 6) {
		for (int x : b) {
			printf("%d ", x);
		}
		printf("\n");
		return;
	}
	if (i == a.size()) return;
	b.push_back(a[i]);
	lottery(a, i + 1, b);
	b.pop_back();
	lottery(a, i + 1, b);
}

int main(void) {
	while (true) {
		int k;
		scanf("%d", &k);
		if (k == 0) break;
		vector<int> a(k);
		for (int i = 0; i < k; i++) {
			scanf("%d", &a[i]);
		}
		vector<int> b;
		lottery(a, 0, b);
		printf("\n");
	}
	return 0;
}