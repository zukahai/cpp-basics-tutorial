#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần 
    int a = random(1, 1000);
    int b = random(1, 1000);
    if (random(1, 3) == 1) {
        b = a;
    }
    cout << a << " " << b << endl;
    
}
