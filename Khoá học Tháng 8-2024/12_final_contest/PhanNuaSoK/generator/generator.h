#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {2, 3, 5};

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

    int n = stoll(s);
    int k1 = random(1, n);
    if (iTest < 20) {
        k1 = iTest;
    }

    if (iTest >= testnum - 10)
    {
        n = 100000;
    }

    vector <int> a = random_vector(n, -n, n);
    if (random(0, 1) == 0)
    {
        a = random_vector(n, 0, n);
    }

    a[random(0, n - 1)] = k1 / 2;


    cout << n << " " << k1 << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}