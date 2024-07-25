#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = random(1, 100);
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << random(-100000000, 100000000) << " ";
    }
    
}
