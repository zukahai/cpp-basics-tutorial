#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int k = random(1, 100);
    cout << k * random(1, 10000) << " " << k * random(1, 10000) << " " << k * random(1, 10000);
    
}
