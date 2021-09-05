#include <iostream>
using namespace std;

int main()
{
	int n, a[n];
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++)
	{
		int iMin=i;
		for(int j=i+1; j<n; j++)
		if(a[j]<a[iMin])
		swap(a[j],a[iMin]);
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
