#include <bits/stdc++.h>

using namespace std;

long long sum(int n) {
	long long tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}

long long sum2(int n) {
	return (long long) n * (n + 1) / 2;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << sum2(a) << endl;
	cout << sum2(b) << endl;
	cout << sum(b) - sum(a - 1);
}

/*

 s = 1 + 2 + 3 + 4
 s = 4 + 3 + 2 + 1
2s = 5 + 5 + 5 + 5
2s = 5 * 4
s = (5 * 4) / 2


 s = 1 + 2 + 3 + ... + n
 s = n + (n - 1) + (n - 2) + ... + 1
2s = (n + 1) + (n + 1) + (n + 1) + ... + (n + 1)
2s = n * (n + 1)
s = n * (n + 1) / 2






a = 3, b = 8

1 + 2 + 3 + 4 + 6 + 7 + 8

sum(b) - sum(a - 1)
sum(8) - sum(2)







Sau khoa hoc C++
- Su dung
	+ Khai bao bien
	+ cin, cout
	+ if else
	+ for , while, do-while
	+ mang 1 chieu, 2 chieu
	+ Ky tu va chuoi ky tu (string)
	+ Lap trinh phuong thuc

-> Hoc them khoa thuat toan
-> Lap trinh web, app
*/
