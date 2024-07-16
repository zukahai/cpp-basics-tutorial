#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int a, b, c;
    a = random(1, 100);
    b = random(1, 100);
    c = random(1, 100);
    cout << a << " " << b << " " << c << endl;
    
}
