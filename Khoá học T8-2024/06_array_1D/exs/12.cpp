#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int max1 = -999999999;
	for (int i = 0; i < n; i++) {
		if (a[i] > max1) {
			max1 = a[i];
		}
	}
	
	int max2 = -999999999;
	for (int i = 0; i < n; i++) {
		if (a[i] != max1) {
			if (a[i] > max2) {
				max2 = a[i];
			}
		}
	}
	
	int max3 = -999999999;
	for (int i = 0; i < n; i++) {
		if (a[i] != max1 && a[i] != max2) {
			if (a[i] > max3) {
				max3 = a[i];
			}
		}
	}
	if (max3 == -999999999) {
		cout << "No third largest element";
	} else {
		cout << max3;
	}
	
}
