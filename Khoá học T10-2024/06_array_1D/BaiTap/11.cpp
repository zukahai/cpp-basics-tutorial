#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	
	int max2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != max) {
			if (max2 < a[i]) {
				max2 = a[i];
			}
		}
	}
	
	cout << max2;
}
