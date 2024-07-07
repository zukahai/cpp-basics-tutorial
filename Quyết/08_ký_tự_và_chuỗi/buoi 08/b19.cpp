#include <iostream>

using namespace std;

int main() {
    int dem = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 32)
        {
            dem += 1;
        }
    cout << dem + 1;
    
}

/*
 dem | so tu
 1     2
 2      3
 4      5
10      11
 
 
 
 */

 
 
