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

string isPrime(int n) {
	int c = countDivisors(n);
	if (c == 2)
		return "YES";
	else
		return "NO";
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << isPrime(a) << endl;
	cout << isPrime(b) << endl;
	cout << isPrime(c) << endl;
}
