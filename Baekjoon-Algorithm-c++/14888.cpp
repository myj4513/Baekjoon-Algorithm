#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);
	vector<int> a(N);
	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
	
	vector<int> b;
	for (int i = 0; i < 4; i++) {
		int k;
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			b.push_back(i);
		}
	}

	sort(b.begin(), b.end());

	int min = 2000000000;
	int max = -2000000000;
	
	do {
		int cal = a[0];
		for (int i = 0; i < b.size(); i++) {
			if (b[i] == 0) {
				cal = cal + a[i + 1];
			}
			if (b[i] == 1) {
				cal = cal - a[i + 1];
			}
			if (b[i] == 2) {
				cal = cal * a[i + 1];
			}
			if (b[i] == 3) {
				cal = cal / a[i + 1];
			}
		}
		if (cal < min) min = cal;
		if (cal > max) max = cal;
	} while (next_permutation(b.begin(), b.end()));

	printf("%d\n%d", max, min);
	
	return 0;

}