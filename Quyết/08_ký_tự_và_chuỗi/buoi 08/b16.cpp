#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 65 && s[i] <= 90)
        {
            
            cout << (char)(s[i] + 32);
        }
        else
            cout << s[i];
        
}

 
 
