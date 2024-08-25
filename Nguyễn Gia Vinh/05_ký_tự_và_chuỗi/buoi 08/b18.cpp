#include <iostream>

using namespace std;

int main() {
    int tong = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++)
        if (s[i] >= 48 && s[i] <= 57)
        {
            tong += s[i]-48;
        }
    cout << tong;
}

 
 
