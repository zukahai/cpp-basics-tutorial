#include <bits/stdc++.h>

using namespace std;

int a[101];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	
	int max2 = 0;
	for (int i = 0; i < n; i++)
		if (a[i] != max) {
			if (a[i] > max2)
				max2 = a[i];		
		}
	cout << max2;
		
	/*
	5
	1 2 3 4 5
	-> max = 5
	1 2 3 4
	-> max2 = 4
	
	
	*/
}
