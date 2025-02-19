#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int s = 0;
	for (int i = 1; i <= N; i++) {
		s += i;
	}
	cout << s;
}
