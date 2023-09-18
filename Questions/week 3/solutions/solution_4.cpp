#include <bits/stdc++.h>
using namespace std;

int main(){
int n;cin>>n;
int * arr1 = new int[n];
for(int i=0;i<n;i++){
	cin>>arr1[i];
}
int m;cin>>m;
int * arr2 = new int[m];
for(int i=0;i<m;i++){
	cin>>arr2[i];
}
for(int i=0;i<n;i++){
	if(arr1[i]>arr2[0]){
		swap(arr1[i],arr2[0]);
		sort(arr2,arr2+m);
	}
	
}

for(int i=0;i<n;i++){
	cout<<arr1[i]<<" ";
}

for(int i=0;i<m;i++){
	cout<<arr2[i]<<" ";
}
cout<<endl;
return 0;
}

