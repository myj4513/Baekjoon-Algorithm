#include <iostream>
#include <algorithm>

using namespace std;

bool nextP(int *a, int n) {
	int i = n - 1;
	while (i>0 && a[i - 1] > a[i]) i -= 1;
	if (i <= 0) return false;
	int j = n - 1;
	while (a[j]<=a[i-1]) j -= 1;
	swap(a[i - 1], a[j]);
	j = n - 1;
	while (i < j) {
		swap(a[i], a[j]);
		i += 1; j -= 1;
	}
	return true;
}

int main(void) {
	int a[10000];
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	if (nextP(a, n)) {
		for (int i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
	}
	else {
		printf("-1");
	}
	return 0;
	

}