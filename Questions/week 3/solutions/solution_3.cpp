#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
unordered_map<int,int> hash;
for(int i=0;i<n;i++){
	int x;cin>>x;
	hash[x]++;
	if(hash[x]==2){
		cout<<x<<endl;
		return 0;
	}
}
return 0;
}

