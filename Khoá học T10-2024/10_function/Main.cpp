#include<bits/stdc++.h>
using namespace std;

void inRaHello() {
	cout << "Hello" << endl;
}

int sum(int a, int b) {
	return a + b;
}

int tong3so(int a, int b, int c) {
	return a + b + c;
}

int tongN(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}


int test(int a, int b) {
	return 2 * a + b;
}

int chuSoCuoi(int n) {
	return n % 10;
}

void inRaNHello(int n) {
	for (int i = 1; i <= n; i++) {
		cout << "Hello" << endl;
	}
}

int main() {
	inRaNHello(2);
	inRaNHello(4);
}

