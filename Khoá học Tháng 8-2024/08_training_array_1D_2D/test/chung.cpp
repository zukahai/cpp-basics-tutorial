#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0],dem=0;
	for( int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++;
			if(a[i]>max)
			{
				max=a[i];
			}
		}
	}
	if(dem!=0)
	{
		cout<<max;
	}
    else
	{
		cout<<-1;
	}
	
}
