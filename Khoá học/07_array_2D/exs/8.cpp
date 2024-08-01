#include <bits/stdc++.h>

using namespace std;

int a[1000][1000];

int main() {
	int m, n;
	cin >> m >> n;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	long long max = -10000000000000000;
	int csRowMax = 0;
	
	for (int i = 0; i < m; i++) {
		long long sum = 0; // tong cua hang chi so i
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
		if (max < sum) {
			max = sum;
			csRowMax = i;
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << a[csRowMax][i] << " ";
	}
	
	
	/*
	
	2 3
	1 2 3
	4 5 6
	
	
	*/
	
}



