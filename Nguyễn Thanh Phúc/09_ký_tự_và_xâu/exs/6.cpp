#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	int tong = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			tong += s[i] - '0';
		}
	}
	cout << tong;
}
