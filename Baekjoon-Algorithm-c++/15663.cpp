#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int cnt[8];
int num[8];
int b[8];

void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		if (cnt[i] > 0) {
			cnt[i]--;
			b[index] = num[i];
			go(index + 1, n, m);
			cnt[i]++;
		}
	}
}

int main(void){
	int n, m;
	scanf("%d %d", &n, &m);

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	int x = a[0];
	int c = 1;
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (x == a[i]) {
			c++;
		}
		else {
			num[k] = x;
			cnt[k] = c;
			c = 1;
			k += 1;
			x = a[i];
		}
	}
	num[k] = x;
	cnt[k] = c;
	n = k + 1;
	go(0, n, m);

	return 0;
}