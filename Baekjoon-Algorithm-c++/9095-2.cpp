#include <iostream>

using namespace std;

int go(int sum, int goal) {
	if (sum > goal) return 0;
	if (sum == goal) return 1;
	int c=0;
	for (int i = 1; i <= 3; i++) {
		c += go(sum + i, goal);
	}
	return c;
}

int main(void) {
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int n;
		scanf("%d", &n);

		printf("%d\n", go(0, n));
	}

	return 0;
}