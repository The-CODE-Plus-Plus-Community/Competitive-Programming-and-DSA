#include <iostream>
using namespace std;

int main()
{
	int n, a[n], key, j=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<n; i++)
	{
		key= a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
		a[j+1]=a[j];
		j=j-1;	
		}
	a[j+1]=key;
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
