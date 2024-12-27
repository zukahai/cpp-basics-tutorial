#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if ((N % 4 == 0 && N % 100 != 0) || N % 400 == 0) {
        cout << "Nam nhuan";
    } else {
       cout << "Khong la nam nhuan";
    }
        
}
