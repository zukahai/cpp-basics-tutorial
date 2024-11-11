#include<bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    long long maxTong = -1000000000000000000; // tong cua hang lon nhat
    int csHang = 0;
    for (int i = 0; i < m; i++) {
    	long long tong = 0; // tong lan luot cac hang
    	for (int j = 0; j < n; j++) {
    		tong += a[i][j];
		}
		
		if (maxTong < tong) {
			maxTong = tong;
			csHang = i;
		}
	}
	
	for (int j = 0; j < n; j++) {
		cout << a[csHang][j] << " ";
	}
}

