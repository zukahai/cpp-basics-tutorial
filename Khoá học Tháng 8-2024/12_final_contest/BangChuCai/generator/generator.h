#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = (iTest * 2000) * (iTest * 200);
    n -= random(n/ 10);
    if (iTest < 20)
        n = random(1, 26);
    
    if (random(0, 4) == 0)
        n = 26 * random(1, 100);
    
    cout << n;
    
}
