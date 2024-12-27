#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 3}, //20% test có n <= 10^2, mỗi ai <= 10^3
    {percent: 30, lenN: 3, lenAi: 6}, //30% test có n <= 10^3, mỗi ai <= 10^6
    {percent: 50, lenN: 6, lenAi: 18}, //50% test có n <= 10^6, mỗi ai <= 10^18
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    // Cout ra những đầu vào cần thiết ở phía dưới

    int a[4];
    a[0] = random(1, 10);
    a[1] = a[0] + random(1, 10);
    a[2] = a[1] + random(1, 10);
    a[3] = (a[0] + a[1] + a[2]) % 2 == 0 ? (a[3] / 2) * 2: (a[3] / 2) * 2 + 1;

    if (random(0, 3) == 0)
        a[2] = (a[0] + a[3]) - a[1];
    else if (random(0, 1))
        a[3] = a[0] + a[1] + a[2];

    sort(a, a + 3);

    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3];

    
}
