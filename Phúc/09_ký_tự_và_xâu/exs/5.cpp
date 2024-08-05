#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	cout << s << endl;
	for (int i = s.size() - 1; i >= 0; i--)
		cout << s[i];
}
