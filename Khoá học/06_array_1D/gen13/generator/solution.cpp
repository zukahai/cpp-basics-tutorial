#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max2 && a[i] != max)
        {
            max2 = a[i];
        }
    }
    if (max2 == -1)
    {
        cout << "No third largest element";
        return 0;
    }

    int max3 = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max3 && a[i] != max && a[i] != max2)
        {
            max3 = a[i];
        }
    }

    if (max3 == -1)
    {
        cout << "No third largest element";
        return 0;
    }

    cout << max3;
    
    
}
