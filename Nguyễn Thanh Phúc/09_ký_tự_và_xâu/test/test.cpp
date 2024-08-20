#include <bits/stdc++.h>

using namespace std;

int main() {
	// int: luu so nguyen
	// float: luu so thuc
	// char: luu ky 
	// string: luu chuoi (nhieu) ky tu
	string s; 
	getline(cin, s); // nhap chuoi
	// Hai va Phuc -> HAI VA PHUC
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = (char) (s[i] - 32);
		}
	}
	cout << s;
}
