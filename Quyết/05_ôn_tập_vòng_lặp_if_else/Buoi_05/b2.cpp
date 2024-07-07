#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    for (int i = m; i < n; i++)
    {
        if (i % m ==0)
        {
            cout << i << " ";
        }
    }
}
