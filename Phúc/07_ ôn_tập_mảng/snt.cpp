#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	bool dungsai = 1;
	for ( int i = 2; i <= n; i++){
		for ( int j = 2; j <= sqrt(i); j++){
			if ( i % j == 0){
			dungsai = 0;
			break;
	    	}
	    }
		if ( dungsai == 1)
		cout << i << " ";
		dungsai = 1;
	}
}
