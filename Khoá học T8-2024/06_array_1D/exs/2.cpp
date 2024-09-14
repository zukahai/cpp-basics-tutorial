#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	
	cout << a[0] << endl << a[n - 1];
	
}
