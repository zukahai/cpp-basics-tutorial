#include <iostream>

using namespace std;

bool tongCacUoc(int n) {
    int tong = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
        {
            tong += i;
            
        }
    if (tong == n)
    {
        return true;
        
    }
    else
    {
        return false;
    }
}
    


int main() {
    int n;
    cin >> n;
    if (tongCacUoc(n) == true)
    {
        cout << " la so hoan hao";
    }
    else
    {
        cout << "khong phai la so hoan hao";
    }
    
}
