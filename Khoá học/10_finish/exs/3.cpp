#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	for(int i= b; i>0;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << gcd(a, b) << endl;
	cout << gcd(a, c) << endl;
	cout << gcd(b, c) << endl;
	cout << gcd(a + b, a + c) << endl;
	
}
