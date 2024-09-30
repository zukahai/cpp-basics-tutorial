#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần 
    
    if (iTest == testnum) {
        cout << 100 << endl;
        return;
    }
    if (iTest == testnum - 1) {
        cout << 50 << endl;
        return;
    }

    cout << random(1, 200);
    
    
}
