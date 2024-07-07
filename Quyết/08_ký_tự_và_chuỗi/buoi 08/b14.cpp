#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 97 && s[i] <= 122)
        {
            cout << s[i];
        }
}
/*
 In ra các ký tự chữ in thường trong chuỗi s
 Ví dụ: s = "Le Quyet"
 Thì in ra euyet
 
 
 
 */
