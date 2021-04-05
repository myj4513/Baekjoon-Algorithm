#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool check(string pw) {
	int ja = 0;
	int mo = 0;
	for (char x : pw) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
			mo++;
		}
		else {
			ja++;
		}
	}
	if (ja >= 2 && mo >= 1) return true;
	else return false;
}

void go(int n, vector<char> a, int i, string pw) {
	if (pw.size() == n) {
		if (check(pw)) cout << pw << "\n";
		return;
	}
	if (i >= a.size()) return;
	go(n, a, i + 1, pw + a[i]);
	go(n, a, i + 1, pw);
}

int main(void) {
	int L, C;
	scanf("%d %d", &L, &C);
	vector<char> a(C);
	for (int i = 0; i < C; i++) {
		scanf(" %c", &a[i]);
	}

	sort(a.begin(), a.end());
	go(L, a, 0, "");
	return 0;
}