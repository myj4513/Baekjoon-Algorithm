#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);

	vector<int> a(N);
	vector<vector<int>> w(N, vector<int>(N));

	int min = 10000000;

	for (int i = 0; i < N; i++) {
		a[i] = i;
		for (int j = 0; j < N; j++) scanf("%d", &w[i][j]);
	}
	
	do {
		int sum = 0;
		bool ok = true;
		for (int i = 0; i < N-1; i++) {
			if (w[a[i]][a[i + 1]] == 0) ok = false;
			else sum += w[a[i]][a[i + 1]];
		}
		if (ok && w[a[N - 1]][0] != 0) {
			sum += w[a[N - 1]][0];
			if (sum < min) min = sum;
		}
	} while (next_permutation(a.begin() + 1, a.end()));

	printf("%d", min);

	return 0;
}