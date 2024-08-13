#include <bits/stdc++.h>

using namespace std;

string toLowerCase(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = char(s[i] + 32);
		}
	}
	return s;
}

string toUpperCase(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = char(s[i] - 32);
		}
	}
	return s;
}

int main() {
	string s, p;
	getline(cin, s);
	getline(cin, p);
	cout << toLowerCase(s) << endl;
	cout << toUpperCase(s) << endl;
	cout << toLowerCase(p) << endl;
	cout << toUpperCase(p) << endl;
}
