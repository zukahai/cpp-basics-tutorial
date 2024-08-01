#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    /*
Phan nguyen cua 5 / 3 la 1
Phan du cua 5 / 3 la 2
Trung binh cong cua 5 va 3 la 4.0
    
    */

    int a, b;
    cin >> a >> b;
    cout << "Phan nguyen cua " << a << " / " << b << " la " << a / b << endl;
    cout << "Phan du cua " << a << " / " << b << " la " << a % b << endl;
    cout << "Trung binh cong cua " << a << " va " << b << " la " << (a + b) / 2.0 << endl;
}
