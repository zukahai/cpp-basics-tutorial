#include <bits/stdc++.h>

using namespace std;

int sumAB(int a, int b) {
    return a + b;
}

void sayHello() {
    cout << "Hello" << endl;
}

bool isPrime(int n) {
    if (n < 2) 
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << sumAB(1, 2) << endl;
    sayHello();
}

/*

def sumAB(a, b):
    return a + b
    
 Hàm đếm số lượng ước số tự nhiên của n (1 <= n <= 10^12)

 */