#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}

int lcm(int a, int b, int g) {
	return a * b / g;
}

int main(void) {
	int a, b;
	cin >> a >> b;
	printf("%d\n", gcd(a, b));
	printf("%d", lcm(a, b, gcd(a,b)));
	return 0;
}