#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    iTest = (iTest == 1 || iTest == 10) ? 2 : iTest;
    cout << iTest;
    
}
