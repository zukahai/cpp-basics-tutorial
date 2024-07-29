#include <bits/stdc++.h>

using namespace std;

int a[100];

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << " ";
}
