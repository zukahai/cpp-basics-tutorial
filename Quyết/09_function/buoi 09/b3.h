#include <iostream>

using namespace std;

bool check(int n) {
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 )
        {
            dem += 1;
            
        }
    if (dem <= 2)
    {
        return true;
    } else {
        return false;
    }
}

int main() {
    if (check(70) == true)
        cout << "La so nguyen to";
    else
        cout << "Khong phai la so nguyen to";
}
