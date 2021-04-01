#include <iostream>

using namespace std;

bool isPrime(int a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i*i <= a; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

int main(void) {
	int n, a[100], count = 0;;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (isPrime(a[i])) count++;
	}
	printf("%d", count);
	return 0;
}