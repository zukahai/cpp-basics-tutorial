#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int tich = 1;
	for (int i = 1; i <= n; i++) {
		tich *= i;
		
		cout << i;
		if (i != n) {
			cout << " * ";
		}
	}
	cout << " = ";
	cout << tich;
}
