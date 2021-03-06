#include <iostream>
using namespace std;
const int MAX = 1000000;
bool check[MAX + 1];
int prime[MAX];
int pn;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	for (int i = 2; i <= MAX; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j <= MAX; j += i) {
				check[j] = true;
			}
		}
	}
	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i < pn; i++) {
			if (check[n - prime[i]] == false) {
				printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
				break;
			}
		}
	}
	return 0;
}