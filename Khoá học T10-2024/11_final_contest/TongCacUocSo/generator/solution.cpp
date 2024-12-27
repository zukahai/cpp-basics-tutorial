#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    // Bài giải của bạn ở dưới đây
    
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            sum += i;
    cout << sum;

}
