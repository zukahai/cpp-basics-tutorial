#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
		
	for (int i = b; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << i;
			break;
		}
	}
}
