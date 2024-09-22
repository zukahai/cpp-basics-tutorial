#include <bits/stdc++.h>

using namespace std;

long long tinhTong (int n) {
	long long tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}

long long tinhTich(int a, int b) {
  return  a * b; 
}

void hello() {
	cout << "Hello" << endl;
}

void hello(int n) {
	for (int i = 1; i <= n; i++) {
		cout << "Hello" << endl;
	}
}

int sum(int a, int b) {
	return 2 * a + b;
}

int main () {
	hello(10);
}
