#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = n; i >= 0; i--) {
    	if (i % 5 == 0) {
    		cout << i << " ";
    		break;
		}
	}
    
    
}
