#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	printf("%d\n", (a+b)%c);
	printf("%d\n", (a%c + b%c)%c);
	printf("%d\n", (a*b)%c);
	printf("%d", ((a%c)*(b%c))%c);
	return 0;
}