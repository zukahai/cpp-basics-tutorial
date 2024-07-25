#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = random(1, 100);
    int a[n];
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        a[i] = random(-100000000, 100000000);
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (random(0, 10) == 0) {
            cout << max << " ";
        } else {
            cout << a[i] << " ";
        }
    }
    
}
