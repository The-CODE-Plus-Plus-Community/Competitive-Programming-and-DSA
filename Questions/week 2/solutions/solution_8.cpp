#include <bits/stdc++.h>
using namespace std;

void arrayUnion(int *a, int n, int *b,int m){
	set<int> st;
	int mx = max(n,m);
	for(int i=0;i<mx;i++){
	  if(i<n){
	  	st.insert(a[i]);
	  }
	  if(i<m){
	  	st.insert(b[i]);
	  }
	}
	
	for(auto x:st){
		cout<<x<<" ";
	}
	cout<<endl;
}

void arrayIntersection(int *a, int n, int *b,int m){
	unordered_map<int,int> hash ;
	for(int i=0;i<n;i++){
		hash[a[i]]++;
	}
	for(int i=0;i<m;i++){
		if(hash[b[i]]>0)
		cout<<b[i]<<" ";
	}
	cout<<endl;
}

int main(){

int n;
cin>>n;

int * arr1 = new int[n];
for(int i=0;i<n;i++){
	cin>>arr1[i];
}

int m;
cin>>m;

int * arr2 = new int[m];
for(int i=0;i<m;i++){
	cin>>arr2[i];
}

sort(arr1,arr1+n);
sort(arr2,arr2+m);

arrayUnion(arr1,n,arr2,m);
arrayIntersection(arr1,n,arr2,m);

return 0;
}

