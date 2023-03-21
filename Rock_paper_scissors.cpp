#include <iostream>
using namespace std;
int main() {
	int r = 0, s = 0, p = 0;
	int n;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (n == 1)
			s++;
		else if (n == 2)
			r++;
		else if (n == 3)
			p++;
	}
	
	if (r == 0 && s > 0 && p > 0)
		cout << s << endl;
	else if (r > 0 && s == 0 && p > 0)
		cout << p << endl;
	else if (r > 0 && s > 0 && p == 0)
		cout << r << endl;
	else if (r > 0 && s > 0 && p > 0 || r > 0 || s > 0 || p > 0)
		cout << 0 << endl;
}

