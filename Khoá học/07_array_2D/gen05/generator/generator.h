#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int m = random((iTest - 1) * 50,  iTest * 50) + random(1, 10);
    int n = random((iTest - 1) * 50,  iTest * 50) + random(1, 10);

    cout << m << " " << n << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << random(- m * n, m * n) << " ";
        }
        cout << endl;
    }
    
}
