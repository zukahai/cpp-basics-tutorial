#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int tong = 0;
	
	while (n != 0) { 
		tong = tong + n % 10;
		n = n / 10;
	}
}

