#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int min = a[0];
    
    for (int i = 1; i < n; i++) {
        if (min > a[i])
            min = a[i];
    }
    cout << min;
    
        
}
// i: Chỉ số, ví trí
// a[i]: phần tử, giá trị tại chỉ số i
