#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    // s = "Gia Vinh";
    // cout << s << endl;
    // cout << s.size() << endl;
    // cout << 2 * s[2] << endl;
    // getline(cin, s);

    // s = "Gia Vinh";
    // s += 'a';
    // cout << s;

    s = "Gia Vinh 1@"; // 1 + 2 + 3 = 6

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '1' && s[i] <= '9') {
            sum += s[i] - '0';
        }
    }

    cout << sum;


}
