#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 48 && ch <= 57)
        cout << "true";
    else
        cout << "false";
}
