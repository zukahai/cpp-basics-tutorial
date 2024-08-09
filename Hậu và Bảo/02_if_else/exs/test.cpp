#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n <= 50) {
		cout << n * 100;
	}
	if (n >= 51 && n <= 100) {
		cout << 50 * 100 + (n - 50) * 150;
	}
	if (n > 100) {
		cout << 50 * 100 + 50 * 150 + (n - 100) * 200;
	}
//	
	if (n <= 50) {
		cout << n * 100;
	} else {
		if (n <= 100) {
			cout << 50 * 100 + (n - 50) * 150;
		} else {
			cout << 50 * 100 + 50 * 150 + (n - 100) * 200;
		}
	}
	
}
