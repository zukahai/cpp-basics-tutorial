#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			cout << (char)(s[i] + 32);
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			cout << (char)(s[i] - 32);
		} else {
			cout << s[i];
		}
	}
}

// Xin123 -> xin123
