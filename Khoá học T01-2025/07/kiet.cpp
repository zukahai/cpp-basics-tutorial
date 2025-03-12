#include <iostream>
using namespace std;
int main(){ 
int a[100];
int n;
cin>>n;
for (int i=0;i<=n-1;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	if(i%2==0){
	cout<<i<<" ";
}
}
}
