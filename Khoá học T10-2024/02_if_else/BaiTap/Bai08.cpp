#include <bits/stdc++.h>

using namespace std;

int main() {	
	int a, b; // day la khai bao 2 bien
	cin >> a >> b;
	
	if (a > b) {
		cout << a << " > " << b;
	} else { 
		if (a < b) {
			cout << a << " < " << b;
		} else {
			cout << a << " = " << b;
		}
	}
}
