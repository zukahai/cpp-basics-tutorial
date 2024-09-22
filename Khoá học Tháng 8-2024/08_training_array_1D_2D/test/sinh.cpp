#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxEven = -1;  
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {  
            if (maxEven == -1 || a[i] > maxEven) {
                maxEven = a[i]; 
            }
        }
    }

    cout << maxEven << endl;
    
    return 0;
}
