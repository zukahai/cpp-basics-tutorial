#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	
	long long tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i];
	}
	cout << tong;

}
