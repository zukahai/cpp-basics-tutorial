#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == 0 || a[i] % 7 == 0) {
			cout << a[i] << " ";
		}
	}

}
