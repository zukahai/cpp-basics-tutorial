#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    if (iTest == testnum) {
        cout << 1 << endl;
        return;
    } 

    if (random(0, 2) == 0) {
        cout << random(1, 10) << random(1, 20) << endl;
    } else {
        int a = random(1, 8);
        if (random(0, 1)) {
            cout << a << a + 1;
        } else {
            cout << a << a - 1;
        }
    }
    
}
