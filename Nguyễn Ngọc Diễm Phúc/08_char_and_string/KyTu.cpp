#include <iostream>

using namespace std;

int main() {
	char ch;
	cin >> ch;
	if (ch >= '0' && ch <= '9') {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
/*

'7' -> 7

Nhap vao ky tu ch
Dua ra ky tu phia sau ky tu do
Vi du
ch = 'A'
Ket qua la 'B'

ch = '{'
Ket qua la '|'


Nhap vao ky tu ch la ky tu chu cai in hoa: 'A' -> 'Z'
Dua ra ky tu in thuong tuong ung
Vi du
ch = 'H'
Ket qua la 'h'

Nhap vao ky tu ch co phai la chu cai in hoa hay khong

Vi du: 
ch = 'A', YES
ch = 'a', NO
ch = '@', NO

*/
