#include <bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);

    // Cout ra những input cần thiết
    int n = 2 * iTest + random(1, 4);
    vector<int> a(n);

    cout << n << endl;
    if ((double)iTest / testnum < 0.8)
    {

        for (int i = 0; i < n; i++)
        {
            a[i] = random(1, iTest * 100);
        }

        for (int i = 0; i < n; i++)
        {
            a[random(n)] = a[random(n)];
        }

        
    }
    else if ((double)iTest / testnum < 0.9)
    {
        a[0] = random(1, iTest * 100);
        a[1] = random(1, iTest * 100);
        for (int i = 2; i < n; i++)
        {
            a[i] = a[random(2)];
        }
    }
    else
    {
        a[0] = random(1, iTest * 100);
        for (int i = 1; i < n; i++)
        {
            a[i] = a[0];
        }

    }
    print_vector(a, cout);
}
