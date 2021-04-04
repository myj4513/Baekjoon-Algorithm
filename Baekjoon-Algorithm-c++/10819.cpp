#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int gap(vector<int> a, int N) {
	int sum = 0;
	for (int i = 0; i < N - 1; i++) {
		sum += abs(a[i] - a[i + 1]);
	}
	return sum;
}

int main(void) {
	int N;
	scanf("%d", &N);

	int max = 0;

	vector<int> a(N);
	for (int i = 0; i < N; i++) scanf("%d", &a[i]);

	sort(a.begin(), a.end());

	do {
		if (gap(a, N) > max) max = gap(a, N);
	} while (next_permutation(a.begin(), a.end()));

	printf("%d", max);

	return 0;
}