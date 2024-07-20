#include <bits/stdc++.h>
using namespace std;

struct Query {
    int L, R, idx;
};

int block_size;

bool compare(Query x, Query y) {
    if (x.L / block_size != y.L / block_size)
        return x.L / block_size < y.L / block_size;
    return x.R < y.R;
}

void add(int x, vector<int>& freq, int& count) {
    freq[x]++;
    if (freq[x] == 2) count++;
    if (freq[x] == 3) count--;
}

void remove(int x, vector<int>& freq, int& count) {
    if (freq[x] == 2) count--;
    if (freq[x] == 3) count++;
    freq[x]--;
}

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    block_size = sqrt(n);
    vector<Query> queries(q);
    vector<int> answers(q);
    
    for (int i = 0; i < q; ++i) {
        cin >> queries[i].L >> queries[i].R;
        queries[i].L--;
        queries[i].R--;
        queries[i].idx = i;
    }
    
    sort(queries.begin(), queries.end(), compare);
    
    vector<int> freq(1e6 + 1, 0);
    int currentL = 0, currentR = -1;
    int count = 0;
    
    for (int i = 0; i < q; ++i) {
        int L = queries[i].L;
        int R = queries[i].R;
        
        while (currentR < R) {
            currentR++;
            add(a[currentR], freq, count);
        }
        while (currentR > R) {
            remove(a[currentR], freq, count);
            currentR--;
        }
        while (currentL < L) {
            remove(a[currentL], freq, count);
            currentL++;
        }
        while (currentL > L) {
            currentL--;
            add(a[currentL], freq, count);
        }
        
        answers[queries[i].idx] = count;
    }
    
    for (int i = 0; i < q; ++i) {
        cout << answers[i] << endl;
    }
    
    return 0;
}
