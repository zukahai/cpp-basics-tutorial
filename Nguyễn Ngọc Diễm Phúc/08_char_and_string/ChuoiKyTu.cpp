#include <iostream>

using namespace std;

int main() {
	string s = "Diem PHUC";
	string p = "";
	
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			p = s[i] + p;
		}
	}
	
	cout << p;
	
	
}
