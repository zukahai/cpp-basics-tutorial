#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    cout << random_string(random(1, iTest * 500)) << endl;
    cout << random_string(random(1, iTest * 500)) << endl;
    
}
