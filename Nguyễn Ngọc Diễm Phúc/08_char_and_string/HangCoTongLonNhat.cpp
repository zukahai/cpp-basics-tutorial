#include <iostream>
using namespace std;
int a[1000][1000];
int main (){
    int m,n;
        cin >>m >>n;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >>a[i][j];
    }
    }
    long long sum1=0;
        for (int j=0; j<=n-1; j++){
            sum1+=a[0][j];
    }
    long long sum;
    long long max=sum1;
    int hang;
    for (int i=0; i<m; i++){
        sum=0;
        for (int j=0; j<=n-1; j++){
            sum+=a[i][j];
        }
        if (sum>max){
            max=sum;
            hang=i;
        }
    }
    for (int j=0; j<n; j++){
        cout <<a[hang][j] <<" ";
    }
}

/*

In ra cot co tong be nhat

3 4
1 2 4 5
5 1 2 3
4 5 9 1

ket qua:
2
1
5


*/

