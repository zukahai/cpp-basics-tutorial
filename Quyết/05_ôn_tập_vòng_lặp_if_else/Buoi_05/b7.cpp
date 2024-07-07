#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if ((a - b <= 10 && a >=b) || (b - a <= 10 && b >= a))
    {
        cout << " chech lech giua a va b khong lon hon 10";
    }
    else
    {
        cout << " chech lech giua a va b lon hon 10";
    }
}
