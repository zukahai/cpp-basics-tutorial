#include<bits/stdc++.h>
using namespace std;

int lastDigit(int n)
{
    return n % 10;
}

int main()
{
    /*
    - Dòng đầu tiên: chữ số cuối cùng của `a`
- Dòng thứ hai: chữ số cuối cùng của `b`
- Dòng thứ ba: chữ số cuối cùng của `c`
- Dòng thứ tư: chữ số cuối cùng của `a + b`
- Dòng thứ năm: chữ số cuối cùng của `a + c`
- Dòng thứ sáu: chữ số cuối cùng của `b + c`
- Dòng cuối cùng: chữ số cuối cùng của `a + b + c`
    */
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int a, b, c;
    cin >> a >> b >> c;
    cout << lastDigit(a) << endl;
    cout << lastDigit(b) << endl;
    cout << lastDigit(c) << endl;
    cout << lastDigit(a + b) << endl;
    cout << lastDigit(a + c) << endl;
    cout << lastDigit(b + c) << endl;
    cout << lastDigit(a + b + c) << endl;
}
