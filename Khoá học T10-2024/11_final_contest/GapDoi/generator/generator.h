#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 4, lenAi: 6}, //30% test có n <= 10^4, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    int n = random(1, 10) * iTest;
    n += random(1, 10);

    int m = random(1, 10) * iTest;

    if (random(1, 100) <= 50) {
        m = 2 * n;
    } else {
        if (random(1, 100) <= 60) {
            m = 2 * n + 1;
        }
    }

    if (random(1, 100) <= 50) {
        swap(n, m);
    }

    cout << n << " " << m;
    
}
