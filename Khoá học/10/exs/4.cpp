#include <bits/stdc++.h>

using namespace std;

int countDivisors(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count ++;
		}
	}
	return count;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << countDivisors(a) << endl;
	cout << countDivisors(b) << endl;
	cout << countDivisors(c) << endl;
}
