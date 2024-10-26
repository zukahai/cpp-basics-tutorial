#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = iTest * 2;
    vector<int> a = random_vector(n, 100);
    cout << n << endl;
    print_vector(a, cout);
    
}
