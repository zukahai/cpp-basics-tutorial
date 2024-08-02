#include<bits/stdc++.h>
using namespace std;

string toUpperCase(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    return s;
}

string toLowerCase(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    return s;
}

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    string s, p;
    getline(cin, s);
    getline(cin, p);
    cout << toLowerCase(s) << endl;
    cout << toUpperCase(s) << endl;
    cout << toLowerCase(p) << endl;
    cout << toUpperCase(p) << endl;

}
