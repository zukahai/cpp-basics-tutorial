#include <iostream>

using namespace std;

int main() {
    int dem = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 48 && s[i]<= 57)
        {
            dem += 1;
        }
    cout << dem;
}
