#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int a = random(iTest  * iTest * iTest);
    int b = a + random(iTest * iTest);
    cout << a << " " << b;
}
