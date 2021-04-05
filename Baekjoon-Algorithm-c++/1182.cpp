#include <iostream>
#include <vector>

using namespace std;
int n, s;
int a[20];

int sumS(int index, int sum) {
	if (index == n) {
		if (sum == s) return 1;
		return 0;
	}
	return sumS(index + 1, sum + a[index]) + sumS(index + 1, sum);
}

int main(void) {
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	if (s == 0) {
		printf("%d", sumS(0, 0) - 1);
	}
	else {
		printf("%d", sumS(0, 0));
	}

	return 0;
}