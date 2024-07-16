#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int a = random(1, 1000);
    int b = random(1, 1000);
    if (random(0, 1))
    {
        cout << a << " " << a;
    }
    else
    {
        cout << b << " " << a;
    }
    
}
