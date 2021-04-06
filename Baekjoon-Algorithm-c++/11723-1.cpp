#include <string>
#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int m;
	cin >> m;
	int s = 0;
	int x;
	for (int i = 0; i < m; i++) {
		string command;
		cin >> command;
		
		if (command == "add") {
			cin >> x;
			x--;
			s = (s | (1 << x));
		}
		else if (command == "remove") {
			cin >> x;
			x--;
			s = (s&~(1 << x));
		}
		else if (command == "check") {
			cin >> x;
			x--;
			if (s & (1 << x)) printf("1\n");
			else printf("0\n");
		}
		else if (command == "toggle") {
			cin >> x;
			x--;
			s = (s ^ (1 << x));
		}
		else if (command == "all") {
			s = (1 << 20) - 1;
		}
		else if (command == "empty") {
			s = 0;
		}
	}
	

	return 0;
}