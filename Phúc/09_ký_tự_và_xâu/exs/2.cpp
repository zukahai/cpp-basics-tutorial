#include <bits/stdc++.h>

using namespace std;

int main() {
	char ch;
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
		cout << "1";
	else if (ch >= 'a' && ch <= 'z')
		cout << "2";
	else if (ch >= '0' && ch <= '9')
		cout << "3";
	else
		cout << "4";
}
