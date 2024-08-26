#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// tim max
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	
	// dem so lan xuat hien
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == max) {
			dem++;
		}
	}
	
	cout << max << " " << dem;
	
}


