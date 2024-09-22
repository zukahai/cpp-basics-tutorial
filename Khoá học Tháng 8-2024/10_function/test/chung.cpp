#include <bits/stdc++.h>

using namespace std;

int lastdigit(int a)
{
	return a%10;
}
int main () 
{
	int a = lastdigit(39);
	int b = lastdigit(123);
	cout << lastdigit(a + b);
}
