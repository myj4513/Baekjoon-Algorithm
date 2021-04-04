#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);

	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		a[i] = i + 1;
	}
	do {
		for (int i = 0; i < N; i++) {
			printf("%d ", a[i]);
		}printf("\n");
	} while (next_permutation(a.begin(), a.end()));

	return 0;
}