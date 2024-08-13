#include <bits/stdc++.h>

using namespace std;

int maxTwoNumber(int a1, int a2) {
	if (a1 > a2)
		return a1;
	else
		return a2;
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int maxAB = maxTwoNumber(a, b);
	int maxCD = maxTwoNumber(c, d);
	int maxABCD = maxTwoNumber(maxAB, maxCD);
	cout << maxAB << endl;
	cout << maxCD << endl;
	cout << maxABCD;
}
