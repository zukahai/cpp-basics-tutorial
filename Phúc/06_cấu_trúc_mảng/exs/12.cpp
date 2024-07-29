#include <bits/stdc++.h>

using namespace std;

int a[100];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	// Tim so lon nhat	
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	
	// Duyet qua nhung so khac max
	int max2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != max) {
			if (a[i] > max2)
				max2 = a[i];
		}
	}
	
	cout << max2;
}

