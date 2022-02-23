#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x;
		cin >> x;
		// view the image in this repository for better understanding
		int exp = 0;
		for (int i = 0; i < 32; i++) {
			if (x & (1 << i)) {
				exp = i; // getting the value of C (highest value)
			}
		}
		// given equation: (A | B) & (B | C) & (C | A)
		// generally, the inequality should be B < A < C:
		// (A | B) = should produce A
		// (B | C) = should produce C
		// (C | A) = should produce C
		// therefore, (A) & (C) & (C) = A
		exp += 2;
		int c = (1 << exp) - 1;
		cout << x << " " << 0 << " " << c << '\n';
	}
	return 0;
}