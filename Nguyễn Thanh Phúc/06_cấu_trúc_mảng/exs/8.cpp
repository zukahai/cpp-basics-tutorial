#include <bits/stdc++.h>

using namespace std;

int a[100];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	long long tong = 0;
	
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			tong += a[i];
		
	cout << tong;
}
