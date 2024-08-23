#include <bits/stdc++.h>

using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    
    int dem = 0;
    while(h1 != h2 || m1 != m2) {
    	cout << h1 << " " << m1 << endl;
    	dem++;
		m1++;
		if (m1 == 60) {
			m1 = 0;
			h1++;
		}	
	}
	cout << dem;
    
    /*
	
	Dieu kien ket thuc
	h1 == h2 va m1 == m2
	Dieu kien while: h1 = h2! hoac m1 != m2
	
	*/
}
