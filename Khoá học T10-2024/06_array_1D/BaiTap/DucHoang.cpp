#include <bits/stdc++.h>
using namespace std ;

int main (){
    int n;
    cin >>n;
    int a[n];

    for (int i=0;i<=n-1;i++){
        cin >> a[i];
    }
    for ( int i=0;i<n;i++){
    	if (a[i] % 2==0 && i % 2!=0) {
    		cout << a[i] << " ";
    	}
    }
}
