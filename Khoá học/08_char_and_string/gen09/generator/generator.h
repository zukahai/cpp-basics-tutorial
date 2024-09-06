#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    string s = random_string(iTest + 1, 1);
   int k = random(1, 10);
   string p = "";
   for (int i = 0; i < k; i++)
   {
       p += s;
   }
   if (random(0, 1) == 0)
   {
       while (k--) {
            p[random(0, p.size())] = p[random(0, p.size())];
       }
   }

   cout << s << endl;
    cout << p;
    
}
