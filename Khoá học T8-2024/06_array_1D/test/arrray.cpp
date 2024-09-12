#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	// 5: 0->4
	// 10: 0->9
	// n: 0 -> n-1
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	long long tong = 0;
	
	for (int i = 0; i < n; i++) {
		tong += a[i];
	}
	
	cout << tong;
	
	/*
	int: so nguyen, -2^31 -> 2^31 - 1
	
	
	*/
}


