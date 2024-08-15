#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(-3);
    a.push_back(-2);
    a.push_back(4);

    cout << "Kich thuoc cua vector: " << a.size() << endl;
    cout << "Phan tu dau tien: " << a.front() << endl;
    cout << "Phan tu cuoi cung: " << a.back() << endl;

    a.pop_back(); // xoa phan tu cuoi cung

    // sort(a.begin(), a.end());
    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

}