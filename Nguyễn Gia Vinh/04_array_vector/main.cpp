#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a; // a = [] 
    a.push_back(1); // a.append(1)
    a.push_back(2); // a.append(2)
    a.push_back(3); // a.append(3)
    for (int i = 0; i < a.size(); i++) { // 0 -> a.size() - 1
        cout << a[i] << " ";
    }
    cout << endl;
    for (auto x: a) {
        cout << x << " ";
    }
}

/*

a = [1, 2, 3, 4, 5] -> vector<int> a = {1, 2, 3, 4, 5};
len(a) -> a.size()
a = [5] * 100 -> vector<int> a(100, 5);
a.append(6) -> a.push_back(6);
a.pop() -> a.pop_back();
a.sort() -> sort(a.begin(), a.end());
a[0] -> a[0];

for i in range(len(a)):
    print(a[i])

for x in a:
    print(x)


*/