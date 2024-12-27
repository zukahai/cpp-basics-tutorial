#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') cout << (char)(ch - 32);
    else cout << (char)(ch + 32);


}
