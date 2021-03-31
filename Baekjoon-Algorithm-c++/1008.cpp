#include <iostream>

using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	printf("%.10llf", (long double)a / b);
	return 0;
}