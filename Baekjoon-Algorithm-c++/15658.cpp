#include <iostream>
#include <vector>

using namespace std;

int MAX = -1000000000;
int MIN = 1000000000;

void go(vector<int> a, int index, int cur, int plus, int minus, int mul, int div) {
	if (index == a.size() - 1) {
		if (cur > MAX) MAX = cur;
		if (cur < MIN) MIN = cur;
		return;
	}
	if (plus > 0) {
		go(a, index + 1, cur + a[index + 1], plus - 1, minus, mul, div);
	}
	if (minus > 0) {
		go(a, index + 1, cur - a[index + 1], plus, minus - 1, mul, div);
	}
	if (mul > 0) {
		go(a, index + 1, cur * a[index + 1], plus, minus, mul - 1, div);
	}
	if (div > 0) {
		go(a, index + 1, cur / a[index + 1], plus, minus, mul, div - 1);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	vector<int> a(n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int operators[4];
	for (int i = 0; i < 4; i++) {
		scanf("%d", &operators[i]);
	}

	go(a, 0, a[0], operators[0], operators[1], operators[2], operators[3]);
	printf("%d\n%d", MAX, MIN);
	return 0;
}