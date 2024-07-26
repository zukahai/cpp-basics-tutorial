#include <bits/stdc++.h>

using namespace std;

int a[10000000];

int main() {
	int n; // so phan tu trong mang
	cin >> n;
	// N so, bat dau tu 0 -> n - 1
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cout << a[n - 1];
	
	
}
