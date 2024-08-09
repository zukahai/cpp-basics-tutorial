#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a = n / 10;
	int b = n % 10;
	
	if (n >= 10 && n <= 99 && ((a - b == 1 || a - b == -1))) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
