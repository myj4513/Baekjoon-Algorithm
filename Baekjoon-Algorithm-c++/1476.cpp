#include <iostream>

int main(void) {
	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);
	int E = 1, S = 1, M = 1;
	int i = 1;
	while(1) {
		if (e == E && s == S && m == M) break;
		E++;
		S++;
		M++;
		i++;
		if (E == 16) E = 1;
		if (S == 29) S = 1;
		if (M == 20) M = 1;
	}
	printf("%d", i);
	return 0;
}