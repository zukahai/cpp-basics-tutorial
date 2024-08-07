#include <bits/stdc++.h>

using namespace std;

// Viet phuong thuc: In ra N chuoi S

void inRaHelloWord(int n, string s) {
	for (int i = 1; i <= n; i++) {
		cout << s << endl;
	}
}

// Viet phuong thuc: Kiem tra va in ra N co phai so chan hay khong?
// N = 5: 5 khong la so chan
// N = 6: 6 la so chan

void sochan(int n){
	if (n % 2 == 0)
		cout << n << " la so chan";
	else 
		cout << n << " khong la so chan";
	cout << endl;
}

// Phuong thuc tinh tong 2 so nguyen

int tongAB(int a, int b) {
	return a + b;
}

// Phuong thuc tim so lon nhat trong 2 so
// 3 7 -> return 7

int timSoLon(int a, int b) {
	if (a > b)
		return a;
	else 
		return b;
}

// Phuong thuc tinh tong tu 1 den n
// 1 < n < 10^6

long long sum(int n) {
	long long s = 0;
	for (int i = 1; i <= n; i++)
		s += i;
	return s;
}

bool isEven(int n) {
	if (n % 2 == 0)
		return true;
	return false;
}

int lastDigit(int n) {
	return n % 10;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << lastDigit(a) << endl;
	cout << lastDigit(b) << endl;
	cout << lastDigit(c) << endl;
	cout << lastDigit(a + b) << endl;
	cout << lastDigit(a + c) << endl;
	cout << lastDigit(b + c) << endl;
	cout << lastDigit(a + b + c) << endl;
	
}

/*
Lap trinh phuong thuc (ham):

- Phuong thuc khong co kieu tra ve
- Phuong thuc co kieu tra ve

// Phuong thuc tim so lon nhat trong 2 so nguyen
// 3 7 -> return 7
Viet 1 phuong thuc (ham)
	- ten phuong thuc:
	- Kieu tra ve:
	- Cac tham so:
	- Xu li trong than ham

*/
