#include <bits/stdc++.h>

using namespace std;

char nextChar(char ch) {
	if (ch == 'z')
		return 'a';
	else
		return ch + 1;
}

string encode(string s) {
	for (int i = 0; i < s.size(); i++)
		s[i] = nextChar(s[i]);
	return s;
}

int main() {
	string s;
	getline(cin, s);
	cout << encode(s);
}
