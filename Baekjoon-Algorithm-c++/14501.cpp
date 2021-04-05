#include <iostream>

using namespace std;

int t[15];
int p[15];
int n;
int MAX = 0;

void go(int day, int sum) {
	if (day > n) return;
	if (day == n) {
		if (sum > MAX) MAX = sum;
		return;
	}
	go(day + t[day], sum + p[day]);
	go(day + 1, sum);
}

int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &t[i], &p[i]);
	}

	go(0, 0);
	printf("%d", MAX);
	return 0;
}