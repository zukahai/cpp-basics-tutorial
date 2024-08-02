#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    string s = random_string(random(1, iTest * 5), 100);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] != ' ') {
            if (random(0, 7) == 0) 
                s[i] = ' ';
        }
    }

    cout << s;
    
}
