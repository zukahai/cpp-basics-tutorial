#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<int> count(256, 0);
    // count[ch] là số lần xuất hiện của kí tự ch

    for (int i = 0; i < s.size(); i++) {
        count[s[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            cout << (char)i << " " << count[i] << endl;
        }
    }


}