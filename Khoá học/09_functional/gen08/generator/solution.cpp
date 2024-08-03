#include<bits/stdc++.h>
using namespace std;

char nextCharacter(char c) {
    c ++;
    if (c > 'z') c = 'a';
    return c;
}

string encode(string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = nextCharacter(s[i]);
    }
    return s;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    string s;
    getline(cin, s);
    cout << encode(s);

    
}
