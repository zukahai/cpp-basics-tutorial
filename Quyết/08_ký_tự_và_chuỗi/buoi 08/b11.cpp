#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s[0] << " " << s[s.length() - 1];
}
