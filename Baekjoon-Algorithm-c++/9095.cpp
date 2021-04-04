#include <iostream>

int n;
int ans;

int add123(int sum) {
	if (sum > n) return ans;
	if (sum == n) ans++;
	add123(sum + 1);
	add123(sum + 2);
	add123(sum + 3);
}

int main(void) {
	int c;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		ans = 0;
		printf("%d\n", add123(0));
	}

	return 0;
}