#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {3, 4, 9};

    string s = "";
    int k = 1;

    if (iTest * 100 < testnum * 20)
    {
        k = 0;
        
    }
    else if (iTest * 100 < testnum * 40)
    {
        k = 1;
    } else {
        // Sinh test ngẫu nhiên
       k = 2;
    }

    int len = lensub[k] * (iTest * 1.0 / testnum);
    if (len == 0) len = 1;

    s = random_string(1, "123456789") + random_string(len - 1, "0123456789");

    long long n = stoll(s);

    if (iTest >= testnum - 10)
    {
        n = 10e9 - random(1, 1e6);
        
    }

    if (random(0, 1))
        {
            n = -n;
        }


    cout << n;
}