#include <bits/stdc++.h>

using namespace std;

long long tinhTong(int n) {
	long long tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}

//   Tinh tong cua 2 so nguyen a va b
int tong2So(int a, int b) {
	return a + b;
}

//  Ham tra ve chu so cuoi cung cua n

int soCuoiCung(int n) {
	return n % 10;
}

// Ham in ra chu Hello

void inHello() {
	cout << "Hello"
}

int main() {
	int k = 1234;
	cout << soCuoiCung(k + 3);
	
}


