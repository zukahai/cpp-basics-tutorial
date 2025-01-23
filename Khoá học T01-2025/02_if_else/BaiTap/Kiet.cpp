#include <iostream>
using namespace std ;
int main(){
   int n;
    cin >> n;
    if(n >=100 && n <= 999){
        if ( n % 2 ==0 ){
            cout << " Yes ";
        }
    } else {
        cout << "  No ";
    }
}
