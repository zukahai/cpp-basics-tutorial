#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	/*
	
	Kiem tra xem so tu nhien N:
	Co phai so chan co 2 chu so hoac so le co ba chu so khong
	In ra YES neu phai, NO neu khong
	N = 46 -> YES
	N = 123 -> YES
	N = 35 -> NO
	N = 124 -> NO
	
	*/
}
