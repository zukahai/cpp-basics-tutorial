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
	
	int max2 = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != max) {
			if (max2 < a[i]) {
				max2 = a[i];
			}
		}
	}
	
	int max3 = -100000000;
	for (int i = 0; i < n; i++) {
		if (a[i] != max && a[i] != max2) {
			if (max3 < a[i]) {
				max3 = a[i];
			}
		}
	}
	
	if (max3 == -100000000) {
		cout << "No third largest element";
	} else {
		cout << max3;
	}
}


